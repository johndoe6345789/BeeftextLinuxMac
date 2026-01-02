cmake_minimum_required(VERSION 3.16)

project(Beeftext VERSION 14.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_program(QMAKE_EXE "qmake")
if (NOT QMAKE_EXE)
    message(FATAL_ERROR "Could not locate qmake executable, make sur you have Qt 6 installed in that qmake is in your PATH environment variable.")
endif()
message(STATUS "Found qmake at ${QMAKE_EXE}")
execute_process(COMMAND "${QMAKE_EXE}" -query QT_INSTALL_PREFIX OUTPUT_VARIABLE QT_DIR OUTPUT_STRIP_TRAILING_WHITESPACE)
message(STATUS "Qt dir is ${QT_DIR}")


set(CMAKE_PREFIX_PATH  ${QT_DIR} ${CMAKE_PREFIX_PATH})
set(CMAKE_CXX_FLAGS_RELEASE  "${CMAKE_CXX_FLAGS_RELEASE} -DNDEBUG")

find_package(Qt6Core)
find_package(Qt6Gui)
find_package(Qt6Widgets)
find_package(Qt6Network)

include_directories("../Submodules/XMiLib")
include_directories("${CMAKE_CURRENT_BINARY_DIR}") # This causes signals declaration not to be reported as unimplemented, because autogen files are in a subfolder of the build dir.

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC_MOC_OPTIONS "-bstdafx.h")
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

# Platform-specific compile options
if(MSVC)
    add_compile_options(/wd4068) # disable warning related to unknown #pragma directives. they are used to provide hint to CLion's clangd code analysis, but VS compiler does not know them.
    add_definitions(-DUNICODE -D_UNICODE)
endif()

# Find Qt lrelease tool for compiling translation files
find_program(QT_LRELEASE_EXECUTABLE NAMES lrelease lrelease-qt6 lrelease6 HINTS "${QT_DIR}/bin")
if(NOT QT_LRELEASE_EXECUTABLE)
    message(WARNING "lrelease not found. Translation files will not be compiled.")
else()
    message(STATUS "Found lrelease at ${QT_LRELEASE_EXECUTABLE}")
endif()

# Get all translation files
file(GLOB BEEFTEXT_TS_FILES "${CMAKE_CURRENT_SOURCE_DIR}/Translations/beeftext_*.ts")
file(GLOB XMILIB_TS_FILES "${CMAKE_CURRENT_SOURCE_DIR}/../Submodules/XMiLib/XMiLib/Translations/xmilib_*.ts")

# Create translation output directory
set(TRANSLATIONS_OUTPUT_DIR "${CMAKE_CURRENT_BINARY_DIR}/translations")

# Custom target to compile all translation files
add_custom_target(translations ALL)

if(QT_LRELEASE_EXECUTABLE)
    # Process each translation file
    foreach(TS_FILE ${BEEFTEXT_TS_FILES} ${XMILIB_TS_FILES})
        # Get the base name and locale (e.g., beeftext_fr_FR.ts -> fr_FR)
        get_filename_component(TS_FILENAME ${TS_FILE} NAME_WE)
        string(REGEX MATCH "([a-z][a-z]_[A-Z][A-Z])" LOCALE ${TS_FILENAME})
        
        if(LOCALE)
            # Create locale directory
            set(LOCALE_DIR "${TRANSLATIONS_OUTPUT_DIR}/${LOCALE}")
            
            # Output .qm file path
            get_filename_component(TS_NAME ${TS_FILE} NAME_WE)
            set(QM_FILE "${LOCALE_DIR}/${TS_NAME}.qm")
            
            # Add custom command to compile .ts to .qm
            add_custom_command(
                OUTPUT ${QM_FILE}
                COMMAND ${CMAKE_COMMAND} -E make_directory ${LOCALE_DIR}
                COMMAND ${QT_LRELEASE_EXECUTABLE} ${TS_FILE} -qm ${QM_FILE}
                DEPENDS ${TS_FILE}
                COMMENT "Compiling ${TS_FILENAME} translation"
            )
            
            # Add to translations target dependencies
            add_custom_target(translation_${TS_NAME} DEPENDS ${QM_FILE})
            add_dependencies(translations translation_${TS_NAME})
            
            # Copy Qt base translations for each locale
            if(EXISTS "${QT_DIR}/translations/qtbase_${LOCALE}.qm")
                set(QT_BASE_QM "${LOCALE_DIR}/qtbase_${LOCALE}.qm")
                add_custom_command(
                    OUTPUT ${QT_BASE_QM}
                    COMMAND ${CMAKE_COMMAND} -E copy_if_different "${QT_DIR}/translations/qtbase_${LOCALE}.qm" ${QT_BASE_QM}
                    COMMENT "Copying Qt base translation for ${LOCALE}"
                )
                add_custom_target(qt_translation_${LOCALE} DEPENDS ${QT_BASE_QM})
                add_dependencies(translations qt_translation_${LOCALE})
            endif()
        endif()
    endforeach()
endif()

add_executable(Beeftext
   AutoStart.cpp
   AutoStart.h
   BeeftextConstants.cpp
   BeeftextConstants.h
   BeeftextGlobals.cpp
   BeeftextGlobals.h
   BeeftextUtils.cpp
   BeeftextUtils.h
   I18nManager.cpp
   I18nManager.h
   InputManager.cpp
   InputManager.h
   KeyboardMapper.cpp
   KeyboardMapper.h
   LatestVersionInfo.cpp
   LatestVersionInfo.h
   main.cpp
   MainWindow.cpp
   MainWindow.h
   MimeDataUtils.cpp
   MimeDataUtils.h
   ProcessListManager.cpp
   ProcessListManager.h
   Shortcut.cpp
   Shortcut.h
   stdafx.cpp
   stdafx.h
   Theme.cpp
   Theme.h
   WaveSound.cpp
   WaveSound.h
   Backup/BackupManager.cpp
   Backup/BackupManager.h
   Backup/BackupRestoreDialog.cpp
   Backup/BackupRestoreDialog.h
   Backup/BackupRestoreDialog.ui
   Clipboard/ClipboardManager.cpp
   Clipboard/ClipboardManager.h
   Clipboard/ClipboardManagerDefault.cpp
   Clipboard/ClipboardManagerDefault.h
   Clipboard/ClipboardManagerLegacy.cpp
   Clipboard/ClipboardManagerLegacy.h
   Combo/CaseSensitivity.cpp
   Combo/CaseSensitivity.h
   Combo/Combo.cpp
   Combo/Combo.h
   Combo/ComboDialog.cpp
   Combo/ComboDialog.h
   Combo/ComboDialog.ui
   Combo/ComboEditor.cpp
   Combo/ComboEditor.h
   Combo/ComboFrame.cpp
   Combo/ComboFrame.h
   Combo/ComboFrame.ui
   Combo/ComboImportDialog.cpp
   Combo/ComboImportDialog.h
   Combo/ComboImportDialog.ui
   Combo/ComboKeywordValidator.cpp
   Combo/ComboKeywordValidator.h
   Combo/ComboList.cpp
   Combo/ComboList.h
   Combo/ComboManager.cpp
   Combo/ComboManager.h
   Combo/ComboSortFilterProxyModel.cpp
   Combo/ComboSortFilterProxyModel.h
   Combo/ComboTableWidget.cpp
   Combo/ComboTableWidget.h
   Combo/ComboTableWidget.ui
   Combo/ComboVariable.cpp
   Combo/ComboVariable.h
   Combo/MatchingMode.cpp
   Combo/MatchingMode.h
   Dialogs/AboutDialog.cpp
   Dialogs/AboutDialog.h
   Dialogs/AboutDialog.ui
   Dialogs/ShortcutDialog.cpp
   Dialogs/ShortcutDialog.h
   Dialogs/ShortcutDialog.ui
   Dialogs/VariableInputDialog.cpp
   Dialogs/VariableInputDialog.h
   Emoji/Emoji.cpp
   Emoji/Emoji.h
   Emoji/EmojiList.cpp
   Emoji/EmojiList.h
   Emoji/EmojiManager.cpp
   Emoji/EmojiManager.h
   Group/Group.cpp
   Group/Group.h
   Group/GroupComboBox.cpp
   Group/GroupComboBox.h
   Group/GroupDialog.cpp
   Group/GroupDialog.h
   Group/GroupDialog.ui
   Group/GroupList.cpp
   Group/GroupList.h
   Group/GroupListWidget.cpp
   Group/GroupListWidget.h
   Group/GroupListWidget.ui
   LastUse/ComboLastUseFile.cpp
   LastUse/ComboLastUseFile.h
   LastUse/EmojiLastUseFile.cpp
   LastUse/EmojiLastUseFile.h
   Picker/PickerItemDelegate.cpp
   Picker/PickerItemDelegate.h
   Picker/PickerModel.cpp
   Picker/PickerModel.h
   Picker/PickerSortFilterProxyModel.cpp
   Picker/PickerSortFilterProxyModel.h
   Picker/PickerWindow.cpp
   Picker/PickerWindow.h
   Picker/PickerWindow.ui
   Picker/PickerWindowMoverResizer.cpp
   Picker/PickerWindowMoverResizer.h
   Preferences/Panes/PrefPane.h
   Preferences/Panes/PrefPaneAdvanced.cpp
   Preferences/Panes/PrefPaneAdvanced.h
   Preferences/Panes/PrefPaneAdvanced.ui
   Preferences/Panes/PrefPaneAppearance.cpp
   Preferences/Panes/PrefPaneAppearance.h
   Preferences/Panes/PrefPaneAppearance.ui
   Preferences/Panes/PrefPaneBehavior.cpp
   Preferences/Panes/PrefPaneBehavior.h
   Preferences/Panes/PrefPaneBehavior.ui
   Preferences/Panes/PrefPaneCombos.cpp
   Preferences/Panes/PrefPaneCombos.h
   Preferences/Panes/PrefPaneCombos.ui
   Preferences/Panes/PrefPaneEmojis.cpp
   Preferences/Panes/PrefPaneEmojis.h
   Preferences/Panes/PrefPaneEmojis.ui
   Preferences/PreferencesDialog.cpp
   Preferences/PreferencesDialog.h
   Preferences/PreferencesDialog.ui
   Preferences/PreferencesManager.cpp
   Preferences/PreferencesManager.h
   Snippet/DelaySnippetFragment.cpp
   Snippet/DelaySnippetFragment.h
   Snippet/KeySnippetFragment.cpp
   Snippet/KeySnippetFragment.h
   Snippet/ShortcutSnippetFragment.cpp
   Snippet/ShortcutSnippetFragment.h
   Snippet/SnippetFragment.cpp
   Snippet/SnippetFragment.h
   Snippet/TextSnippetFragment.cpp
   Snippet/TextSnippetFragment.h
   Update/UpdateCheckWorker.cpp
   Update/UpdateCheckWorker.h
   Update/UpdateDialog.cpp
   Update/UpdateDialog.h
   Update/UpdateDialog.ui
   Update/UpdateManager.cpp
   Update/UpdateManager.h
   Beeftext.qrc
   Beeftext.rc
)

add_dependencies(Beeftext translations)

target_precompile_headers(Beeftext PRIVATE stdafx.h)
target_link_libraries(Beeftext Qt6::Core)
target_link_libraries(Beeftext Qt6::Gui)
target_link_libraries(Beeftext Qt6::Widgets)
target_link_libraries(Beeftext Qt6::Network)
target_link_libraries(Beeftext XMiLib)

# Platform-specific libraries
if(WIN32)
    target_link_libraries(Beeftext Winmm)
endif()
