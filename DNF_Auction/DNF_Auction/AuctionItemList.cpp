#include "AuctionItemList.h"

AuctionItemList::AuctionItemList(QWidget* parent)
    //: QHBoxLayout(parent), itemimage(parent), Description(parent), costing(parent) //addwidget만으로 작동 되니까 나중에 addwidget이 부모,자식 역할을 동시에 해주는지, 메모리 할당 취소할때 동일하게 작동하는지 테스트
    : QHBoxLayout(parent)
{
    itemimage.setParent(parent);
    Description.setParent(parent);
    costing.setParent(parent);

    itemimage.setPixmap(QPixmap("resources/browser.png"));
    Description.setText("test textt");
    costing.setText("1234");

    addWidget(&itemimage);
    addWidget(&Description);
    addWidget(&costing);
}

AuctionItemList::~AuctionItemList()
{
}
