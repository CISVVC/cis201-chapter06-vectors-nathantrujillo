#ifndef TRANSACTION_H
#define TRANSACTION_H
#include <iostream>
#include <string>
#include <vector>

class Transaction
{
private:
    int m_day;
    double m_ammount;
    std::string m_description;

public:
    Transaction();
    Transaction(int day, double ammount, std::string description);
    std::string to_string();
    double get_ammount();
    int get_day();
};

#endif
