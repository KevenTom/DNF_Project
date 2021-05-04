#include "ItemDelegate.h"

ItemDelegate::ItemDelegate(QWidget* parent)
	:QStyledItemDelegate(parent)
{

}

void ItemDelegate::paint(QPainter* painter, const QStyleOptionViewItem& option, const QModelIndex& index) const
{
    //if (index.data().canConvert<AuctionItemList>())
    //{
    //    AuctionItemList itemList = qvariant_cast<AuctionItemList>(index.data());

    //    if (option.state & QStyle::State_Selected)
    //        painter->fillRect(option.rect, option.palette.highlight());

    //    itemList.paint(painter, option.rect, option.palette, StarRating::EditMode::ReadOnly);

    //    QApplication::style()->drawControl(QStyle::CE_PushButton, &button, painter);
    //}
    //else {
    //    QStyledItemDelegate::paint(painter, option, index);
    //}


    QRect rect = option.rect;
    QRect textRect(rect);
    textRect.setHeight(30);
    painter->drawText(textRect, "123");

    //QRect buttonRect(rect);
    //buttonRect.setY(textRect.y() + 35);
    //buttonRect.setHeight(30);
    //QStyleOptionButton button;
    //button.rect = buttonRect;
    //button.text = "321";

    //QApplication::style()->drawControl
    //(QStyle::CE_PushButton, &button, painter);
    
    painter->drawLine(10, 10, 100, 40);  // line
}

QSize ItemDelegate::sizeHint(const QStyleOptionViewItem& option, const QModelIndex& index) const
{
    //if (index.data().canConvert<AuctionItemList>()) {
    //    AuctionItemList itemList = qvariant_cast<AuctionItemList>(index.data());
    //    return itemList.sizeHint();
    //}
    //return QStyledItemDelegate::sizeHint(option, index);

    return QSize(800, 70);
}