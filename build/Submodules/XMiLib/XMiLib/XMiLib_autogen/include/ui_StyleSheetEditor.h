/********************************************************************************
** Form generated from reading UI file 'StyleSheetEditor.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STYLESHEETEDITOR_H
#define UI_STYLESHEETEDITOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StyleSheetEditor
{
public:
    QAction *actionApply;
    QAction *actionOk;
    QAction *actionCancel;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *edit;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonOk;
    QPushButton *buttonCancel;
    QPushButton *buttonApply;

    void setupUi(QWidget *StyleSheetEditor)
    {
        if (StyleSheetEditor->objectName().isEmpty())
            StyleSheetEditor->setObjectName("StyleSheetEditor");
        StyleSheetEditor->resize(581, 683);
        actionApply = new QAction(StyleSheetEditor);
        actionApply->setObjectName("actionApply");
        actionOk = new QAction(StyleSheetEditor);
        actionOk->setObjectName("actionOk");
        actionCancel = new QAction(StyleSheetEditor);
        actionCancel->setObjectName("actionCancel");
        verticalLayout = new QVBoxLayout(StyleSheetEditor);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        edit = new QPlainTextEdit(StyleSheetEditor);
        edit->setObjectName("edit");

        verticalLayout->addWidget(edit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonOk = new QPushButton(StyleSheetEditor);
        buttonOk->setObjectName("buttonOk");

        horizontalLayout->addWidget(buttonOk);

        buttonCancel = new QPushButton(StyleSheetEditor);
        buttonCancel->setObjectName("buttonCancel");

        horizontalLayout->addWidget(buttonCancel);

        buttonApply = new QPushButton(StyleSheetEditor);
        buttonApply->setObjectName("buttonApply");

        horizontalLayout->addWidget(buttonApply);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(StyleSheetEditor);
        QObject::connect(actionApply, SIGNAL(triggered()), StyleSheetEditor, SLOT(onActionApply()));
        QObject::connect(actionOk, SIGNAL(triggered()), StyleSheetEditor, SLOT(onActionOk()));
        QObject::connect(actionCancel, SIGNAL(triggered()), StyleSheetEditor, SLOT(onActionCancel()));
        QObject::connect(buttonOk, &QPushButton::clicked, actionOk, qOverload<>(&QAction::trigger));
        QObject::connect(buttonApply, &QPushButton::clicked, actionApply, qOverload<>(&QAction::trigger));
        QObject::connect(buttonCancel, &QPushButton::clicked, actionCancel, qOverload<>(&QAction::trigger));

        QMetaObject::connectSlotsByName(StyleSheetEditor);
    } // setupUi

    void retranslateUi(QWidget *StyleSheetEditor)
    {
        StyleSheetEditor->setWindowTitle(QString());
        actionApply->setText(QCoreApplication::translate("StyleSheetEditor", "&Apply", nullptr));
        actionOk->setText(QCoreApplication::translate("StyleSheetEditor", "&OK", nullptr));
        actionCancel->setText(QCoreApplication::translate("StyleSheetEditor", "&Cancel", nullptr));
        buttonOk->setText(QCoreApplication::translate("StyleSheetEditor", "&OK", nullptr));
        buttonCancel->setText(QCoreApplication::translate("StyleSheetEditor", "&Cancel", nullptr));
        buttonApply->setText(QCoreApplication::translate("StyleSheetEditor", "&Apply", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StyleSheetEditor: public Ui_StyleSheetEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STYLESHEETEDITOR_H
