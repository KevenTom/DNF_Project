/********************************************************************************
** Form generated from reading UI file 'DNF_Auction.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DNF_AUCTION_H
#define UI_DNF_AUCTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DNF_AuctionClass
{
public:

    void setupUi(QWidget *DNF_AuctionClass)
    {
        if (DNF_AuctionClass->objectName().isEmpty())
            DNF_AuctionClass->setObjectName(QString::fromUtf8("DNF_AuctionClass"));
        DNF_AuctionClass->resize(600, 400);

        retranslateUi(DNF_AuctionClass);

        QMetaObject::connectSlotsByName(DNF_AuctionClass);
    } // setupUi

    void retranslateUi(QWidget *DNF_AuctionClass)
    {
        DNF_AuctionClass->setWindowTitle(QCoreApplication::translate("DNF_AuctionClass", "DNF_Auction", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DNF_AuctionClass: public Ui_DNF_AuctionClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DNF_AUCTION_H
