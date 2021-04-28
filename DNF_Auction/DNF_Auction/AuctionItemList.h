#pragma once

#include <QLabel>

class ListDescription
{
public:
	QLabel Description;
	QLabel costing;

	void setLabelGeometry(int ax, int ay, int aw, int ah)
	{
		Description.setGeometry(ax, ay, aw, ah);
		costing.setGeometry(ax, ay, aw, ah);
	}
};

class AuctionItemList : public QWidget
{
	Q_OBJECT
public:
	AuctionItemList(QWidget* parent = nullptr);
	~AuctionItemList();

public:
	QLabel itemimage;
	ListDescription itemcosting[3];

public:

};

