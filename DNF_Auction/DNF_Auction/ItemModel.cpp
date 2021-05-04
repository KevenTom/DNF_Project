#include "ItemModel.h"

ItemModel::ItemModel(QObject* parent)
    : QAbstractTableModel(parent)
{
    itemCount = 5;
    explainCount = 5;
}

int ItemModel::rowCount(const QModelIndex& parent) const
{
    return itemCount;
}

int ItemModel::columnCount(const QModelIndex& parent) const
{
    return explainCount;
}

QVariant ItemModel::data(const QModelIndex& index, int role) const
{
    if (role == Qt::DisplayRole)
        return QString("Row%1, Column%2")
        .arg(index.row() + 1)
        .arg(index.column() + 1);

    return QVariant();
}