#ifndef RECEIPT_H
#define RECEIPT_H

#include "itemlist.h"
#include "date.h"
#include <unordered_map>

class Receipt {
private:
    std::vector<std::pair<Date, ItemList>> m_Receipt;

public:
    Receipt();

    ~Receipt();

    ItemList receiptByDay(const Date&);

    bool add(const Date&, Item*, const int&);

    size_t size() const;
};

#endif // RECEIPT_H