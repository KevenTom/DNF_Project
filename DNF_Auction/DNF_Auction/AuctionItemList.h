#pragma once

#include <QHBoxLayout>
#include <QLabel>

class AuctionItemList : public QWidget
{
	Q_OBJECT

public:
	AuctionItemList(int profit, QWidget* parent = Q_NULLPTR);
	~AuctionItemList();

public:
	QHBoxLayout mainlayout;

	QLabel itemimage;	//정적변수라도 부모를 설정해줘야 한다.
	QLabel Description;
	QLabel costing;

public:

};

