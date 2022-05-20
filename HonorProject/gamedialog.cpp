#include "gamedialog.h"

GameDialog::GameDialog(QObject *parent)
    : QAbstractItemModel(parent)
{
}

QVariant GameDialog::headerData(int section, Qt::Orientation orientation, int role) const
{
    // FIXME: Implement me!
}

QModelIndex GameDialog::index(int row, int column, const QModelIndex &parent) const
{
    // FIXME: Implement me!
}

QModelIndex GameDialog::parent(const QModelIndex &index) const
{
    // FIXME: Implement me!
}

int GameDialog::rowCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;

    // FIXME: Implement me!
}

int GameDialog::columnCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;

    // FIXME: Implement me!
}

QVariant GameDialog::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    // FIXME: Implement me!
    return QVariant();
}
