#pragma once

#include <QHBoxLayout>
#include <QLabel>

class AuctionItemList : public QHBoxLayout
{
	Q_OBJECT

public:
	AuctionItemList(QWidget* parent = Q_NULLPTR);
	~AuctionItemList();

public:
	QLabel itemimage;
	QLabel Description;
	QLabel costing;

public:

};

