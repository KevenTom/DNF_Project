#include "DNF_Auction.h"


DNF_Auction::DNF_Auction(QWidget* parent)
    : QWidget(parent)
{
    //ui.setupUi(this);
    setWindowTitle("DNF_Auction Widget");
    setLayout(&itemlistlayout);

    for (int i = 0; i < *testcount; ++i)
    {
        auctuinitemarray.push_back(new AuctionItemList(i, this));

        itemlistlayout.addWidget(auctuinitemarray[i]);
    }

    testview.setModel(&testmodel);
    testview.setItemDelegate(&testdelegate);
    //testview.setSelectionMode(QAbstractItemView::NoSelection);  //각종 옵션 설정 나중에 델리게이트 만들고 난 후에 이어서

    //testview.show();

    itemlistlayout.addWidget(&testview);

}

DNF_Auction::~DNF_Auction()
{

}
