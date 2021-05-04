#include "ItemDelegate.h"

ItemDelegate::ItemDelegate(QWidget* parent)
	:QStyledItemDelegate(parent)
{
    
}

void ItemDelegate::paint(QPainter* painter, const QStyleOptionViewItem& option, const QModelIndex& index) const
{
    painter->save();

    QRect rect = option.rect;

    painter->fillRect(rect, QColor(135, 206, 255));
    

    painter->translate(rect.left(), rect.top());
    //painter->translate(rect.x(), rect.y());

    painter->drawRect(rect);

    QImage image("resources/browser.png");
    painter->drawImage(0, 0, image);

    painter->drawText(0, 0, "321");


    painter->restore();
}

QSize ItemDelegate::sizeHint(const QStyleOptionViewItem& option, const QModelIndex& index) const
{
    return QStyledItemDelegate::sizeHint(option, index);
}