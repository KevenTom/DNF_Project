#include "DNF_Auction.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DNF_Auction w;
    w.show();
    return a.exec();
}
