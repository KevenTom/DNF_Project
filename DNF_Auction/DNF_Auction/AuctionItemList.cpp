#include "AuctionItemList.h"

AuctionItemList::AuctionItemList(int profit, QWidget* parent)
    //: QHBoxLayout(parent), itemimage(parent), Description(parent), costing(parent) //addwidget만으로 작동 되니까 나중에 addwidget이 부모,자식 역할을 동시에 해주는지, 메모리 할당 취소할때 동일하게 작동하는지 테스트
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
