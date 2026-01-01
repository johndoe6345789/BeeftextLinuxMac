/********************************************************************************
** Form generated from reading UI file 'ThreadedOperationDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THREADEDOPERATIONDIALOG_H
#define UI_THREADEDOPERATIONDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ThreadedOperationDialog
{
public:
    QAction *actionCancel;
    QVBoxLayout *verticalLayout;
    QLabel *labelDescription;
    QLabel *labelStatus;
    QProgressBar *progressBar;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonCancel;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *ThreadedOperationDialog)
    {
        if (ThreadedOperationDialog->objectName().isEmpty())
            ThreadedOperationDialog->setObjectName("ThreadedOperationDialog");
        ThreadedOperationDialog->resize(335, 162);
        actionCancel = new QAction(ThreadedOperationDialog);
        actionCancel->setObjectName("actionCancel");
        verticalLayout = new QVBoxLayout(ThreadedOperationDialog);
        verticalLayout->setSpacing(18);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(-1, 18, -1, 0);
        labelDescription = new QLabel(ThreadedOperationDialog);
        labelDescription->setObjectName("labelDescription");
        QFont font;
        font.setBold(true);
        labelDescription->setFont(font);
        labelDescription->setText(QString::fromUtf8("#Description#"));
        labelDescription->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelDescription);

        labelStatus = new QLabel(ThreadedOperationDialog);
        labelStatus->setObjectName("labelStatus");
        labelStatus->setText(QString::fromUtf8("#Status#"));
        labelStatus->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelStatus);

        progressBar = new QProgressBar(ThreadedOperationDialog);
        progressBar->setObjectName("progressBar");
        progressBar->setValue(24);

        verticalLayout->addWidget(progressBar);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 10, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonCancel = new QPushButton(ThreadedOperationDialog);
        buttonCancel->setObjectName("buttonCancel");

        horizontalLayout->addWidget(buttonCancel);

        horizontalSpacer_2 = new QSpacerItem(40, 10, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(17, 16, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(ThreadedOperationDialog);
        QObject::connect(actionCancel, SIGNAL(triggered()), ThreadedOperationDialog, SLOT(onActionCancel()));
        QObject::connect(buttonCancel, &QPushButton::clicked, actionCancel, qOverload<>(&QAction::trigger));

        QMetaObject::connectSlotsByName(ThreadedOperationDialog);
    } // setupUi

    void retranslateUi(QDialog *ThreadedOperationDialog)
    {
        ThreadedOperationDialog->setWindowTitle(QString());
        actionCancel->setText(QCoreApplication::translate("ThreadedOperationDialog", "&Cancel", nullptr));
        buttonCancel->setText(QCoreApplication::translate("ThreadedOperationDialog", "&Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ThreadedOperationDialog: public Ui_ThreadedOperationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THREADEDOPERATIONDIALOG_H
