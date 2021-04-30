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
}

DNF_Auction::~DNF_Auction()
{

}
