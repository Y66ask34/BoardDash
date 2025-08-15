/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *buttonLayout;
    QPushButton *login_button;
    QPushButton *register_button;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *lineEditLayout;
    QLabel *username_label;
    QLineEdit *username_lineEdit;
    QLabel *password_label;
    QLineEdit *password_lineEdit;
    QLabel *label_3;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(79, 79, 79, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(72, 72, 72, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(60, 60, 60, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(24, 24, 24, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(117, 117, 117, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush6(QColor(33, 33, 33, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        QBrush brush7(QColor(48, 48, 48, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush7);
        QBrush brush8(QColor(0, 0, 0, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush8);
        QBrush brush9(QColor(0, 255, 0, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush9);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        QBrush brush10(QColor(255, 255, 220, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush10);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush8);
        QBrush brush11(QColor(255, 255, 255, 127));
        brush11.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush11);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette.setBrush(QPalette::Active, QPalette::Accent, brush8);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush9);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush10);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush8);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush11);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette.setBrush(QPalette::Inactive, QPalette::Accent, brush8);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush10);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush8);
        QBrush brush12(QColor(24, 24, 24, 127));
        brush12.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        QBrush brush13(QColor(34, 34, 34, 255));
        brush13.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette.setBrush(QPalette::Disabled, QPalette::Accent, brush13);
#endif
        MainWindow->setPalette(palette);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(10, 380, 781, 191));
        buttonLayout = new QVBoxLayout(verticalLayoutWidget);
        buttonLayout->setSpacing(0);
        buttonLayout->setObjectName("buttonLayout");
        buttonLayout->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);
        buttonLayout->setContentsMargins(200, 30, 200, 10);
        login_button = new QPushButton(verticalLayoutWidget);
        login_button->setObjectName("login_button");
        login_button->setMinimumSize(QSize(380, 40));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush14(QColor(56, 56, 56, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush14);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush14);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush14);
        login_button->setPalette(palette1);
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        login_button->setFont(font);
        login_button->setAutoFillBackground(true);

        buttonLayout->addWidget(login_button);

        register_button = new QPushButton(verticalLayoutWidget);
        register_button->setObjectName("register_button");
        register_button->setEnabled(true);
        register_button->setMinimumSize(QSize(380, 40));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Button, brush14);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush14);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush14);
        register_button->setPalette(palette2);
        register_button->setFont(font);
        register_button->setMouseTracking(false);
        register_button->setAutoFillBackground(true);

        buttonLayout->addWidget(register_button);

        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(110, 140, 591, 231));
        lineEditLayout = new QVBoxLayout(verticalLayoutWidget_2);
        lineEditLayout->setSpacing(0);
        lineEditLayout->setObjectName("lineEditLayout");
        lineEditLayout->setContentsMargins(30, 0, 30, 0);
        username_label = new QLabel(verticalLayoutWidget_2);
        username_label->setObjectName("username_label");
        username_label->setEnabled(true);
        username_label->setMaximumSize(QSize(20000, 50));
        QPalette palette3;
        QBrush brush15(QColor(0, 255, 127, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush15);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush15);
        username_label->setPalette(palette3);
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setItalic(true);
        username_label->setFont(font1);
        username_label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        lineEditLayout->addWidget(username_label);

        username_lineEdit = new QLineEdit(verticalLayoutWidget_2);
        username_lineEdit->setObjectName("username_lineEdit");
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush);
        username_lineEdit->setPalette(palette4);

        lineEditLayout->addWidget(username_lineEdit);

        password_label = new QLabel(verticalLayoutWidget_2);
        password_label->setObjectName("password_label");
        password_label->setEnabled(true);
        password_label->setMaximumSize(QSize(20000, 50));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush15);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush15);
        password_label->setPalette(palette5);
        password_label->setFont(font1);
        password_label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        lineEditLayout->addWidget(password_label);

        password_lineEdit = new QLineEdit(verticalLayoutWidget_2);
        password_lineEdit->setObjectName("password_lineEdit");
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::Text, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush);
        password_lineEdit->setPalette(palette6);
        password_lineEdit->setInputMethodHints(Qt::InputMethodHint::ImhHiddenText|Qt::InputMethodHint::ImhNoAutoUppercase|Qt::InputMethodHint::ImhNoPredictiveText|Qt::InputMethodHint::ImhSensitiveData);
        password_lineEdit->setEchoMode(QLineEdit::EchoMode::Password);
        password_lineEdit->setReadOnly(false);

        lineEditLayout->addWidget(password_lineEdit);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(200, 10, 400, 60));
        QPalette palette7;
        QBrush brush16(QColor(85, 255, 0, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush16);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush16);
        label_3->setPalette(palette7);
        QFont font2;
        font2.setPointSize(28);
        font2.setBold(true);
        font2.setItalic(true);
        label_3->setFont(font2);
        label_3->setAutoFillBackground(true);
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        login_button->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        register_button->setText(QCoreApplication::translate("MainWindow", "Registration", nullptr));
        username_label->setText(QCoreApplication::translate("MainWindow", "User name", nullptr));
        password_label->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "BoardDash", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
