/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionLoad;
    QAction *actionSave;
    QAction *actionQuit;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label_2;
    QLabel *penseLabel_2;
    QLabel *JCLabel_2;
    QWidget *tabInput;
    QLineEdit *qInDesc;
    QLineEdit *qInCurr;
    QLineEdit *qInVal;
    QPushButton *addEntryButton;
    QTextEdit *qLogOut;
    QPushButton *printAllButton;
    QPushButton *deleteEntryButton;
    QLabel *background;
    QLabel *descriptionLabel;
    QLabel *currencyLabel;
    QLabel *ValueLabel;
    QLabel *JCLabel;
    QLabel *penseLabel;
    QWidget *tab_output;
    QLineEdit *qStartDate;
    QLineEdit *qEndDate;
    QComboBox *qViewModeBox;
    QTextEdit *qOutput;
    QPushButton *printEntriesButton;
    QLabel *label_3;
    QLabel *viewLabel;
    QLabel *viewLabel_2;
    QLabel *viewLabel_3;
    QLabel *JCLabel_3;
    QLabel *penseLabel_3;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(794, 435);
        actionLoad = new QAction(MainWindow);
        actionLoad->setObjectName("actionLoad");
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName("actionSave");
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName("actionQuit");
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(0, 0, 801, 401));
        tab = new QWidget();
        tab->setObjectName("tab");
        label_2 = new QLabel(tab);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 0, 791, 371));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/xmenBackground.jpg")));
        label_2->setScaledContents(true);
        penseLabel_2 = new QLabel(tab);
        penseLabel_2->setObjectName("penseLabel_2");
        penseLabel_2->setGeometry(QRect(530, 130, 301, 131));
        penseLabel_2->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/PENSE.png")));
        penseLabel_2->setScaledContents(true);
        JCLabel_2 = new QLabel(tab);
        JCLabel_2->setObjectName("JCLabel_2");
        JCLabel_2->setGeometry(QRect(640, 250, 211, 111));
        JCLabel_2->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/JC.png")));
        JCLabel_2->setScaledContents(true);
        tabWidget->addTab(tab, QString());
        tabInput = new QWidget();
        tabInput->setObjectName("tabInput");
        qInDesc = new QLineEdit(tabInput);
        qInDesc->setObjectName("qInDesc");
        qInDesc->setGeometry(QRect(20, 70, 431, 21));
        qInCurr = new QLineEdit(tabInput);
        qInCurr->setObjectName("qInCurr");
        qInCurr->setGeometry(QRect(476, 70, 91, 21));
        qInVal = new QLineEdit(tabInput);
        qInVal->setObjectName("qInVal");
        qInVal->setGeometry(QRect(590, 70, 91, 21));
        addEntryButton = new QPushButton(tabInput);
        addEntryButton->setObjectName("addEntryButton");
        addEntryButton->setGeometry(QRect(700, 60, 71, 41));
        addEntryButton->setAutoFillBackground(false);
        addEntryButton->setStyleSheet(QString::fromUtf8("background-image:url(:/new/prefix1/Picture1.png)"));
        qLogOut = new QTextEdit(tabInput);
        qLogOut->setObjectName("qLogOut");
        qLogOut->setGeometry(QRect(20, 120, 661, 181));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        qLogOut->setFont(font);
        qLogOut->setAutoFillBackground(false);
        qLogOut->setStyleSheet(QString::fromUtf8(""));
        printAllButton = new QPushButton(tabInput);
        printAllButton->setObjectName("printAllButton");
        printAllButton->setGeometry(QRect(20, 310, 151, 41));
        printAllButton->setAutoFillBackground(false);
        printAllButton->setStyleSheet(QString::fromUtf8("background-image:url(:/new/prefix1/Picture1.png)"));
        deleteEntryButton = new QPushButton(tabInput);
        deleteEntryButton->setObjectName("deleteEntryButton");
        deleteEntryButton->setGeometry(QRect(200, 310, 141, 41));
        deleteEntryButton->setAutoFillBackground(false);
        deleteEntryButton->setStyleSheet(QString::fromUtf8("background-image:url(:/new/prefix1/Picture1.png)"));
        background = new QLabel(tabInput);
        background->setObjectName("background");
        background->setGeometry(QRect(0, 0, 791, 371));
        background->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/xmenBackground.jpg")));
        background->setScaledContents(true);
        descriptionLabel = new QLabel(tabInput);
        descriptionLabel->setObjectName("descriptionLabel");
        descriptionLabel->setGeometry(QRect(210, 20, 181, 61));
        descriptionLabel->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/Description.png")));
        descriptionLabel->setScaledContents(true);
        currencyLabel = new QLabel(tabInput);
        currencyLabel->setObjectName("currencyLabel");
        currencyLabel->setGeometry(QRect(443, 20, 161, 61));
        currencyLabel->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/Currency.png")));
        currencyLabel->setScaledContents(true);
        ValueLabel = new QLabel(tabInput);
        ValueLabel->setObjectName("ValueLabel");
        ValueLabel->setGeometry(QRect(557, 22, 161, 61));
        ValueLabel->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/Value.png")));
        ValueLabel->setScaledContents(true);
        JCLabel = new QLabel(tabInput);
        JCLabel->setObjectName("JCLabel");
        JCLabel->setGeometry(QRect(640, 250, 211, 111));
        JCLabel->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/JC.png")));
        JCLabel->setScaledContents(true);
        penseLabel = new QLabel(tabInput);
        penseLabel->setObjectName("penseLabel");
        penseLabel->setGeometry(QRect(530, 130, 301, 131));
        penseLabel->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/PENSE.png")));
        penseLabel->setScaledContents(true);
        tabWidget->addTab(tabInput, QString());
        background->raise();
        penseLabel->raise();
        qInCurr->raise();
        qInVal->raise();
        addEntryButton->raise();
        printAllButton->raise();
        deleteEntryButton->raise();
        qLogOut->raise();
        qInDesc->raise();
        descriptionLabel->raise();
        currencyLabel->raise();
        ValueLabel->raise();
        JCLabel->raise();
        tab_output = new QWidget();
        tab_output->setObjectName("tab_output");
        qStartDate = new QLineEdit(tab_output);
        qStartDate->setObjectName("qStartDate");
        qStartDate->setGeometry(QRect(162, 66, 91, 21));
        qEndDate = new QLineEdit(tab_output);
        qEndDate->setObjectName("qEndDate");
        qEndDate->setGeometry(QRect(280, 66, 91, 21));
        qViewModeBox = new QComboBox(tab_output);
        qViewModeBox->addItem(QString());
        qViewModeBox->addItem(QString());
        qViewModeBox->addItem(QString());
        qViewModeBox->addItem(QString());
        qViewModeBox->setObjectName("qViewModeBox");
        qViewModeBox->setGeometry(QRect(20, 67, 121, 21));
        qOutput = new QTextEdit(tab_output);
        qOutput->setObjectName("qOutput");
        qOutput->setGeometry(QRect(18, 120, 661, 181));
        qOutput->setStyleSheet(QString::fromUtf8(""));
        printEntriesButton = new QPushButton(tab_output);
        printEntriesButton->setObjectName("printEntriesButton");
        printEntriesButton->setGeometry(QRect(400, 60, 151, 41));
        printEntriesButton->setAutoFillBackground(false);
        printEntriesButton->setStyleSheet(QString::fromUtf8("background-image:url(:/new/prefix1/Picture1.png)"));
        label_3 = new QLabel(tab_output);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(0, 0, 791, 371));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/xmenBackground.jpg")));
        label_3->setScaledContents(true);
        viewLabel = new QLabel(tab_output);
        viewLabel->setObjectName("viewLabel");
        viewLabel->setGeometry(QRect(0, 24, 151, 51));
        viewLabel->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/viewMode.png")));
        viewLabel->setScaledContents(true);
        viewLabel_2 = new QLabel(tab_output);
        viewLabel_2->setObjectName("viewLabel_2");
        viewLabel_2->setGeometry(QRect(134, 25, 151, 51));
        viewLabel_2->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/startDate.png")));
        viewLabel_2->setScaledContents(true);
        viewLabel_3 = new QLabel(tab_output);
        viewLabel_3->setObjectName("viewLabel_3");
        viewLabel_3->setGeometry(QRect(251, 25, 151, 51));
        viewLabel_3->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/endDate.png")));
        viewLabel_3->setScaledContents(true);
        JCLabel_3 = new QLabel(tab_output);
        JCLabel_3->setObjectName("JCLabel_3");
        JCLabel_3->setGeometry(QRect(640, 250, 211, 111));
        JCLabel_3->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/JC.png")));
        JCLabel_3->setScaledContents(true);
        penseLabel_3 = new QLabel(tab_output);
        penseLabel_3->setObjectName("penseLabel_3");
        penseLabel_3->setGeometry(QRect(530, 130, 301, 131));
        penseLabel_3->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/PENSE.png")));
        penseLabel_3->setScaledContents(true);
        tabWidget->addTab(tab_output, QString());
        label_3->raise();
        penseLabel_3->raise();
        qStartDate->raise();
        qEndDate->raise();
        qViewModeBox->raise();
        qOutput->raise();
        printEntriesButton->raise();
        viewLabel->raise();
        viewLabel_2->raise();
        viewLabel_3->raise();
        JCLabel_3->raise();
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 794, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName("menuFile");
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName("mainToolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionLoad);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionQuit);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionLoad->setText(QCoreApplication::translate("MainWindow", "Load", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        actionQuit->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
        label_2->setText(QString());
        penseLabel_2->setText(QString());
        JCLabel_2->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Main", nullptr));
        addEntryButton->setText(QCoreApplication::translate("MainWindow", "Add Entry", nullptr));
        qLogOut->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">README:</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Click File-Load to load in a csv file compatible to the database eg: source-file.csv </span></p>\n"
"<p style=\" margin-top:0px; margin-bott"
                        "om:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Click File-Save to save current database to a csv file</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Enter the description, currency and value of the expense on the space provided.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Push Add Entry to add it to the database</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font"
                        "-family:'MS Shell Dlg 2';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">printAll button shows all contents of the database</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Delete Last Entry Removes the last entry from the database</span></p></body></html>", nullptr));
        printAllButton->setText(QCoreApplication::translate("MainWindow", "printAll", nullptr));
        deleteEntryButton->setText(QCoreApplication::translate("MainWindow", "Delete Last Entry", nullptr));
        background->setText(QString());
        descriptionLabel->setText(QString());
        currencyLabel->setText(QString());
        ValueLabel->setText(QString());
        JCLabel->setText(QString());
        penseLabel->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tabInput), QCoreApplication::translate("MainWindow", "Input", nullptr));
        qViewModeBox->setItemText(0, QCoreApplication::translate("MainWindow", "perDay", nullptr));
        qViewModeBox->setItemText(1, QCoreApplication::translate("MainWindow", "perMonth", nullptr));
        qViewModeBox->setItemText(2, QCoreApplication::translate("MainWindow", "perYear", nullptr));
        qViewModeBox->setItemText(3, QCoreApplication::translate("MainWindow", "perEntry", nullptr));

        qOutput->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">README:</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Summarize the Expense perDay, month, year, or per entry.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-b"
                        "ottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Enter the desired start and end date on the space provided. Push button to view the requested entries</p></body></html>", nullptr));
        printEntriesButton->setText(QCoreApplication::translate("MainWindow", "Print Entries", nullptr));
        label_3->setText(QString());
        viewLabel->setText(QString());
        viewLabel_2->setText(QString());
        viewLabel_3->setText(QString());
        JCLabel_3->setText(QString());
        penseLabel_3->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_output), QCoreApplication::translate("MainWindow", "Output", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
