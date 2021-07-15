// Copyright (c) 2017-2020 The PIVX Developers
// Copyright (c) 2020 The DogeCash Developers

// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef SETTINGSEXPORTCSV_H
#define SETTINGSEXPORTCSV_H

#include <QWidget>
#include "qt/dogecash/pwidget.h"
#include "transactionfilterproxy.h"
#include <QSortFilterProxyModel>

namespace Ui {
class SettingsExportCSV;
}

class SettingsExportCSV : public PWidget
{
    Q_OBJECT

public:
    explicit SettingsExportCSV(DOGECGUI* _window, QWidget *parent = nullptr);
    ~SettingsExportCSV();

private Q_SLOTS:
    void selectFileOutput(const bool& isTxExport);
    void exportTxes(const QString& filename);
    void exportAddrs(const QString& filename);

private:
    Ui::SettingsExportCSV *ui;
    TransactionFilterProxy* txFilter{nullptr};
    QSortFilterProxyModel* addressFilter{nullptr};
};

#endif // SETTINGSEXPORTCSV_H