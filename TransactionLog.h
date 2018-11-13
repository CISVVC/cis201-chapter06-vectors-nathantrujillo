#ifndef TRANSACTIONLOG_H
#define TRANSACTIONLOG_H
#include <vector>
#include "Transaction.h"

class TransactionLog
{
std::vector<Transaction> m_transactions;
double m_balance;
double m_min_balance;
double m_average_balance;

public:
    TransactionLog();
    void add_transaction(Transaction t);
    int min_daily_balance();
    double average_daily_balance();
    void print();
};

#endif
