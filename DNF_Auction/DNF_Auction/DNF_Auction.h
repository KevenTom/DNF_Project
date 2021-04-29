#pragma once

#include <QtWidgets/QWidget>

#include "ui_DNF_Auction.h"
#include "AuctionItemList.h"


class DNF_Auction : public QWidget
{
    Q_OBJECT

public:
    DNF_Auction(QWidget* parent = Q_NULLPTR);
    ~DNF_Auction();

public:
    //Ui::DNF_AuctionClass ui;

    AuctionItemList* testitemlist;

public:

};