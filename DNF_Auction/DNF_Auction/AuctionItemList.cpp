#include "AuctionItemList.h"

AuctionItemList::AuctionItemList(QWidget* parent)
    //: QHBoxLayout(parent), itemimage(parent), Description(parent), costing(parent) //addwidget������ �۵� �Ǵϱ� ���߿� addwidget�� �θ�,�ڽ� ������ ���ÿ� ���ִ���, �޸� �Ҵ� ����Ҷ� �����ϰ� �۵��ϴ��� �׽�Ʈ
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
