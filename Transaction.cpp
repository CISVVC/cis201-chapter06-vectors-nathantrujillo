#include "Transaction.h"
#include <iostream>

Transaction::Transaction()
{
    m_day = 1;
    m_ammount = 0;
    m_description = " ";
}

Transaction::Transaction(int day, double ammount, std::string description)
{
    m_day = day;
    m_ammount = ammount;
    m_description = description;
}

std::string Transaction::to_string()
{
    return std::to_string(m_day)
        + "       $" + std::to_string(m_ammount)
        + "         " + m_description;
}

double Transaction::get_ammount()
{
    return m_ammount;
}

int Transaction::get_day()
{
    return m_day;
}
