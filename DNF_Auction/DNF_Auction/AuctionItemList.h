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

	QLabel itemimage;	//���������� �θ� ��������� �Ѵ�.
	QLabel Description;
	QLabel costing;

public:

};

