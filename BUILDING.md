# Building Beeftext

This document describes how to build Beeftext on different platforms.

## Prerequisites

### All Platforms
- CMake 3.16 or later
- Qt 6 with development tools (including `lrelease`)
- C++20 compatible compiler

### Windows
- Visual Studio 2019 or later (or MinGW-w64)
- Qt 6 for Windows

### Linux
- GCC 9 or later (or Clang 10+)
- Qt 6 development packages
  - On Ubuntu/Debian: `sudo apt install qt6-base-dev qt6-tools-dev qt6-tools-dev-tools`
  - On Fedora: `sudo dnf install qt6-qtbase-devel qt6-qttools-devel`
  - On Arch: `sudo pacman -S qt6-base qt6-tools`

### macOS
- Xcode with Command Line Tools
- Qt 6 (via Homebrew: `brew install qt@6`)

## Building

### Step 1: Clone the Repository
```bash
git clone https://github.com/xmichelo/Beeftext.git
cd Beeftext
git submodule update --init --recursive
```

### Step 2: Configure with CMake
```bash
mkdir build
cd build
cmake ..
```

**Note:** Make sure `qmake` from your Qt installation is in your PATH. CMake will automatically detect Qt and the `lrelease` tool for compiling translations.

### Step 3: Build
```bash
cmake --build .
```

Or use platform-specific build commands:
- **Windows (Visual Studio):** Open the generated `.sln` file
- **Linux/macOS:** `make -j$(nproc)`

## Translation Compilation

The build system automatically compiles all `.ts` translation files to `.qm` files using Qt's `lrelease` tool. Translation files are organized by locale in the `translations/` directory:

```
build/Beeftext/translations/
├── de_DE/
│   ├── beeftext_de_DE.qm
│   ├── xmilib_de_DE.qm
│   └── qtbase_de_DE.qm
├── fr_FR/
│   ├── beeftext_fr_FR.qm
│   ├── xmilib_fr_FR.qm
│   └── qtbase_fr_FR.qm
└── ...
```

### Supported Languages
- German (de_DE)
- Spanish (es_ES)
- French (fr_FR)
- Hungarian (hu_HU)
- Italian (it_IT)
- Dutch (nl_NL)
- Polish (pl_PL)
- Portuguese (pt_PT)
- Russian (ru_RU)
- Chinese Simplified (zh_CN)
- Chinese Traditional (zh_TW)

## Troubleshooting

### "lrelease not found" warning
If you see this warning during CMake configuration, it means the Qt `lrelease` tool is not in your PATH. Translation files will not be compiled, but the application will still build and run (in English only).

**Solution:** Add Qt's bin directory to your PATH:
- **Windows:** `set PATH=C:\Qt\6.x.x\msvc2019_64\bin;%PATH%`
- **Linux/macOS:** `export PATH=/path/to/qt6/bin:$PATH`

### "Could not locate qmake executable"
CMake uses `qmake` to locate your Qt installation. Make sure it's in your PATH.

### Platform-specific compilation errors
The build system now properly handles platform-specific code:
- MSVC-specific compiler flags are only used on Windows
- The `Winmm` library is only linked on Windows
- Translation compilation works on all platforms

## Cross-Platform Changes

Previous versions of Beeftext required PowerShell for building, which only worked on Windows. The build system has been updated to use CMake's native capabilities for cross-platform compatibility:

- ✅ PowerShell dependency removed
- ✅ Translation compilation works on Windows, macOS, and Linux
- ✅ Platform-specific code properly isolated
- ✅ All translations are now compiled (not just French)
