/********************************************************************************
** Form generated from reading UI file 'DebugLogWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEBUGLOGWINDOW_H
#define UI_DEBUGLOGWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DebugLogWindow
{
public:
    QAction *actionClearLog;
    QAction *actionClose;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QFrame *buttonFrame;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QCheckBox *checkboxInfoFilter;
    QCheckBox *checkboxWarningFilter;
    QCheckBox *checkboxErrorFilter;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonClearLog;
    QPushButton *buttonClose;

    void setupUi(QWidget *DebugLogWindow)
    {
        if (DebugLogWindow->objectName().isEmpty())
            DebugLogWindow->setObjectName("DebugLogWindow");
        DebugLogWindow->resize(719, 632);
        actionClearLog = new QAction(DebugLogWindow);
        actionClearLog->setObjectName("actionClearLog");
        actionClose = new QAction(DebugLogWindow);
        actionClose->setObjectName("actionClose");
        verticalLayout = new QVBoxLayout(DebugLogWindow);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        tableView = new QTableView(DebugLogWindow);
        tableView->setObjectName("tableView");
        tableView->horizontalHeader()->setStretchLastSection(true);
        tableView->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tableView);

        buttonFrame = new QFrame(DebugLogWindow);
        buttonFrame->setObjectName("buttonFrame");
        buttonFrame->setFrameShape(QFrame::StyledPanel);
        buttonFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(buttonFrame);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(buttonFrame);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        checkboxInfoFilter = new QCheckBox(buttonFrame);
        checkboxInfoFilter->setObjectName("checkboxInfoFilter");
        checkboxInfoFilter->setChecked(true);

        horizontalLayout->addWidget(checkboxInfoFilter);

        checkboxWarningFilter = new QCheckBox(buttonFrame);
        checkboxWarningFilter->setObjectName("checkboxWarningFilter");
        checkboxWarningFilter->setChecked(true);

        horizontalLayout->addWidget(checkboxWarningFilter);

        checkboxErrorFilter = new QCheckBox(buttonFrame);
        checkboxErrorFilter->setObjectName("checkboxErrorFilter");
        checkboxErrorFilter->setChecked(true);

        horizontalLayout->addWidget(checkboxErrorFilter);

        horizontalSpacer = new QSpacerItem(615, 10, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonClearLog = new QPushButton(buttonFrame);
        buttonClearLog->setObjectName("buttonClearLog");

        horizontalLayout->addWidget(buttonClearLog);

        buttonClose = new QPushButton(buttonFrame);
        buttonClose->setObjectName("buttonClose");

        horizontalLayout->addWidget(buttonClose);


        verticalLayout->addWidget(buttonFrame);


        retranslateUi(DebugLogWindow);
        QObject::connect(actionClearLog, SIGNAL(triggered()), DebugLogWindow, SLOT(onActionClearLog()));
        QObject::connect(buttonClearLog, &QPushButton::clicked, actionClearLog, qOverload<>(&QAction::trigger));
        QObject::connect(buttonClose, &QPushButton::clicked, actionClose, qOverload<>(&QAction::trigger));
        QObject::connect(actionClose, SIGNAL(triggered()), DebugLogWindow, SLOT(onActionClose()));
        QObject::connect(checkboxInfoFilter, SIGNAL(clicked()), DebugLogWindow, SLOT(onFilterChanged()));
        QObject::connect(checkboxWarningFilter, SIGNAL(clicked()), DebugLogWindow, SLOT(onFilterChanged()));
        QObject::connect(checkboxErrorFilter, SIGNAL(clicked()), DebugLogWindow, SLOT(onFilterChanged()));

        QMetaObject::connectSlotsByName(DebugLogWindow);
    } // setupUi

    void retranslateUi(QWidget *DebugLogWindow)
    {
        DebugLogWindow->setWindowTitle(QString());
        actionClearLog->setText(QCoreApplication::translate("DebugLogWindow", "C&lear Log", nullptr));
#if QT_CONFIG(shortcut)
        actionClearLog->setShortcut(QCoreApplication::translate("DebugLogWindow", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actionClose->setText(QCoreApplication::translate("DebugLogWindow", "&Close", nullptr));
        label->setText(QCoreApplication::translate("DebugLogWindow", "Show:", nullptr));
        checkboxInfoFilter->setText(QCoreApplication::translate("DebugLogWindow", "Infos", nullptr));
        checkboxWarningFilter->setText(QCoreApplication::translate("DebugLogWindow", "Warnings", nullptr));
        checkboxErrorFilter->setText(QCoreApplication::translate("DebugLogWindow", "Errors", nullptr));
        buttonClearLog->setText(QCoreApplication::translate("DebugLogWindow", "C&lear Log", nullptr));
        buttonClose->setText(QCoreApplication::translate("DebugLogWindow", "&Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DebugLogWindow: public Ui_DebugLogWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEBUGLOGWINDOW_H
