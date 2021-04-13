#pragma once

#include <QtWidgets/QWidget>
#include "ui_DNF_Auction.h"

class DNF_Auction : public QWidget
{
    Q_OBJECT

public:
    DNF_Auction(QWidget *parent = Q_NULLPTR);

private:
    Ui::DNF_AuctionClass ui;
};
