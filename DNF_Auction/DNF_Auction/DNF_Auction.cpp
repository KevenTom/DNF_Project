#include "DNF_Auction.h"

DNF_Auction::DNF_Auction(QWidget* parent)
    : QWidget(parent)
{
    //ui.setupUi(this);
    setWindowTitle("DNF_Auction Widget");

    testitemlist = new AuctionItemList(this);

}

DNF_Auction::~DNF_Auction()
{

}
