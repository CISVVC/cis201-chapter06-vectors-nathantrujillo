/*
File: main.cpp
Description: This program prints out a bank statment from the transactionlog. The program prints out the daily balance, intrest earned for the month, minimum daily balance, and average daily balance.
Author: Nathan Trujillo
Email: trujillon@student.vvc.edu
Date Created: 11/10/18
*/
#include <iostream>
#include "TransactionLog.h"

int main()
{
    TransactionLog tlog;
    
    tlog.add_transaction(Transaction(1,1143.24, "Initial Balance"));
    tlog.add_transaction(Transaction(2,-246.78, "Check 1234"));
    tlog.add_transaction(Transaction(3,-220.00, "ATM Withdrawal"));
    tlog.add_transaction(Transaction(4,1600.50, "Deposit"));
    tlog.add_transaction(Transaction(5,-114.13, "ATM Payment"));
    tlog.add_transaction(Transaction(6,-1000.00, "Check 1235"));
    tlog.add_transaction(Transaction(7,-50.00, "ATM Payment"));
    tlog.add_transaction(Transaction(8,1700.00, "Deposit"));
    tlog.add_transaction(Transaction(9,-560.99, "Check 1236"));
    tlog.add_transaction(Transaction(10,-140.00, "ATM Payment"));

    tlog.print();

    return 0;
}
