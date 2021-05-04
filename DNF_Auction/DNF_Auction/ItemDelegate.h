#pragma once


#include <QStyledItemDelegate>
#include "AuctionItemList.h"


class ItemDelegate : public QStyledItemDelegate
{
	Q_OBJECT
public:
	ItemDelegate(QWidget* parent = Q_NULLPTR);

	void paint(QPainter* painter, const QStyleOptionViewItem& option, const QModelIndex& index) const override;
	QSize sizeHint(const QStyleOptionViewItem& option, const QModelIndex& index) const override;
};

