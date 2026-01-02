/********************************************************************************
** Form generated from reading UI file 'StringListEditorDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STRINGLISTEDITORDIALOG_H
#define UI_STRINGLISTEDITORDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_StringListEditorDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *labelHeader;
    QHBoxLayout *horizontalLayout_2;
    QListView *stringListView;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *buttonLayout;
    QPushButton *buttonAdd;
    QPushButton *buttonRemove;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonOk;
    QPushButton *buttonCancel;

    void setupUi(QDialog *StringListEditorDialog)
    {
        if (StringListEditorDialog->objectName().isEmpty())
            StringListEditorDialog->setObjectName("StringListEditorDialog");
        StringListEditorDialog->resize(520, 357);
        verticalLayout_2 = new QVBoxLayout(StringListEditorDialog);
        verticalLayout_2->setSpacing(12);
        verticalLayout_2->setObjectName("verticalLayout_2");
        labelHeader = new QLabel(StringListEditorDialog);
        labelHeader->setObjectName("labelHeader");
        labelHeader->setText(QString::fromUtf8("#Title#"));
        labelHeader->setWordWrap(true);

        verticalLayout_2->addWidget(labelHeader);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        stringListView = new QListView(StringListEditorDialog);
        stringListView->setObjectName("stringListView");
        stringListView->setDragDropMode(QAbstractItemView::InternalMove);
        stringListView->setDefaultDropAction(Qt::IgnoreAction);
        stringListView->setSelectionMode(QAbstractItemView::ExtendedSelection);
        stringListView->setSelectionBehavior(QAbstractItemView::SelectRows);

        horizontalLayout_2->addWidget(stringListView);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName("verticalLayout");
        buttonLayout = new QVBoxLayout();
        buttonLayout->setObjectName("buttonLayout");
        buttonAdd = new QPushButton(StringListEditorDialog);
        buttonAdd->setObjectName("buttonAdd");

        buttonLayout->addWidget(buttonAdd);

        buttonRemove = new QPushButton(StringListEditorDialog);
        buttonRemove->setObjectName("buttonRemove");

        buttonLayout->addWidget(buttonRemove);


        verticalLayout->addLayout(buttonLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 5, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonOk = new QPushButton(StringListEditorDialog);
        buttonOk->setObjectName("buttonOk");

        horizontalLayout->addWidget(buttonOk);

        buttonCancel = new QPushButton(StringListEditorDialog);
        buttonCancel->setObjectName("buttonCancel");

        horizontalLayout->addWidget(buttonCancel);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(StringListEditorDialog);
        QObject::connect(buttonCancel, &QPushButton::clicked, StringListEditorDialog, qOverload<>(&QDialog::reject));
        QObject::connect(buttonOk, &QPushButton::clicked, StringListEditorDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonRemove, SIGNAL(clicked()), StringListEditorDialog, SLOT(onActionRemoveString()));
        QObject::connect(buttonAdd, SIGNAL(clicked()), StringListEditorDialog, SLOT(onActionAddString()));

        QMetaObject::connectSlotsByName(StringListEditorDialog);
    } // setupUi

    void retranslateUi(QDialog *StringListEditorDialog)
    {
        StringListEditorDialog->setWindowTitle(QString());
        buttonAdd->setText(QCoreApplication::translate("StringListEditorDialog", "&Add", nullptr));
        buttonRemove->setText(QCoreApplication::translate("StringListEditorDialog", "&Remove", nullptr));
        buttonOk->setText(QCoreApplication::translate("StringListEditorDialog", "&OK", nullptr));
        buttonCancel->setText(QCoreApplication::translate("StringListEditorDialog", "&Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StringListEditorDialog: public Ui_StringListEditorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STRINGLISTEDITORDIALOG_H
