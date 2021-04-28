#include "AuctionItemList.h"

AuctionItemList::AuctionItemList(QWidget* parent)
	: QWidget(parent)
{
    QLabel* itemcostingggg[3];
    for (int i = 0; i < 3; ++i)
    {
        itemcostingggg[i] = new QLabel("what the fuck", this);
        itemcostingggg[i]->setGeometry(100, i * 30, 130, 40);
    }

}

AuctionItemList::~AuctionItemList()
{

}
