#include "DNF_Auction.h"

DNF_Auction::DNF_Auction(QWidget* parent)
    : QWidget(parent)
{
    ui.setupUi(this);

    setWindowTitle("DNF_Auction Widget");



    itemimage.setParent(this);
    itemimage.setPixmap(QPixmap("resources/browser.png"));
    itemimage.setGeometry(100, 100, 130, 40);


    Description.setParent(this);
    Description.setText("test textt");
    Description.setGeometry(100, 15, 130, 40);

    costing.setParent(this);
    costing.setText("1234");
    costing.setGeometry(100, 30, 130, 40);
}

DNF_Auction::~DNF_Auction()
{

}
