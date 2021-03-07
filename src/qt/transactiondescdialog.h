// Copyright (c) 2011-2014 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef ZERO_QT_TRANSACTIONDESCDIALOG_H
#define ZERO_QT_TRANSACTIONDESCDIALOG_H

#include <QDialog>

namespace Ui {
    class TransactionDescDialog;
}

QT_BEGIN_NAMESPACE
class QModelIndex;
QT_END_NAMESPACE

enum
{
    FULL_TRANSACTION = 0,
    MEMO_ONLY = 1,
    SPENDING_KEY = 2,
    VIEWING_KEY = 3
};


/** Dialog showing transaction details. */
class TransactionDescDialog : public QDialog
{
    Q_OBJECT

public:
    explicit TransactionDescDialog(const QModelIndex &idx, int type, QString message = "", QWidget *parent = 0);
    ~TransactionDescDialog();

private:
    Ui::TransactionDescDialog *ui;
};

#endif // ZERO_QT_TRANSACTIONDESCDIALOG_H
