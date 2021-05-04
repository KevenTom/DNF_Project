#pragma once

#include <QHBoxLayout>
#include <QLabel>
#include <QPainter>
#include <QPolygonF>
#include <QSize>

class AuctionItemList : public QWidget
{
	Q_OBJECT

public:
	AuctionItemList(int profit, QWidget* parent = Q_NULLPTR);

	enum class EditMode { Editable, ReadOnly };
	void paint(QPainter* painter, const QRect& rect, const QPalette& palette, EditMode mode) const;
	QSize sizeHint() const;
public:
	QHBoxLayout mainlayout;

	QLabel itemimage;
	QLabel Description;
	QLabel costing;

public:

};

