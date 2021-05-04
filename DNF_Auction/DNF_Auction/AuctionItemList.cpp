#include "AuctionItemList.h"

AuctionItemList::AuctionItemList(int profit, QWidget* parent)
    //: QHBoxLayout(parent), itemimage(parent), Description(parent), costing(parent) //addwidget������ �۵� �Ǵϱ� ���߿� addwidget�� �θ�,�ڽ� ������ ���ÿ� ���ִ���, �޸� �Ҵ� ����Ҷ� �����ϰ� �۵��ϴ��� �׽�Ʈ
    : QWidget(parent)
{
    setLayout(&mainlayout);
    
    mainlayout.addWidget(&itemimage);
    mainlayout.addWidget(&Description);
    mainlayout.addWidget(&costing);

    itemimage.setPixmap(QPixmap("resources/browser.png"));

    QString inttoqstring;
    Description.setText(inttoqstring.setNum(profit));
    costing.setText(inttoqstring.setNum(profit));
}
