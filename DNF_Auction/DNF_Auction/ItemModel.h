#pragma once
#include <qabstractitemmodel.h>

class ItemModel : public QAbstractTableModel
{
    Q_OBJECT
public:
    ItemModel(QObject* parent = nullptr);
    int rowCount(const QModelIndex& parent = QModelIndex()) const override;
    int columnCount(const QModelIndex& parent = QModelIndex()) const override;
    QVariant data(const QModelIndex& index, int role = Qt::DisplayRole) const override;

private:
    int itemCount;
    int explainCount;
};
