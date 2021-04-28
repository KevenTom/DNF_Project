#pragma once

#include <QtWidgets/QWidget>
#include <QLabel>

#include "ui_DNF_Auction.h"


class DNF_Auction : public QWidget
{
    Q_OBJECT

public:
    DNF_Auction(QWidget* parent = Q_NULLPTR);
    ~DNF_Auction();

public:
    Ui::DNF_AuctionClass ui;

    QLabel itemimage;
    QLabel Description;
    QLabel costing;

public:

};