#include <QtWidgets/QApplication>
#include "DNF_Auction.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DNF_Auction w;
    w.show();
    return a.exec();
}
