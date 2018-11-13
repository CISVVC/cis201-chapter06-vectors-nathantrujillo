#include <iostream>
#include "TransactionLog.h"

TransactionLog::TransactionLog()
{
    m_balance = 0;
    m_min_balance = false;
    m_average_balance = 0;
}

void TransactionLog::add_transaction(Transaction t)
{
    m_transactions.push_back(t);
    m_balance += t.get_ammount();
    min_daily_balance();
}
// Calculates the daily balance
int TransactionLog::min_daily_balance()
{
    if (m_balance < m_min_balance || m_min_balance == false)
        m_min_balance = m_balance;
}
// calculates average daily balance
double TransactionLog::average_daily_balance()
{
    double sum_total = 0;
    for(double i = 0; i < m_transactions.size();i++)
    {
        sum_total = sum_total + m_transactions[i].get_ammount();
    }
    return sum_total / 30;
}
//prints statement 
void TransactionLog::print()
{
        double sum_total = 0;
        std::cout << "*********Monthly Statement*********" << std::endl;
        for(double i = 0; i < m_transactions.size();i++)
        {
             std::cout << "Day       Amount       Description" << std::endl;
             std::cout << m_transactions[i].to_string() << std::endl;
             sum_total = sum_total + m_transactions[i].get_ammount();
             std::cout << "-----------------------------------" << std::endl;
             std::cout << "Daily Balance: $" << sum_total << std::endl;
             std::cout << "     " << std::endl;
        }
        std::cout << "Monthly Balance:       $" << sum_total << std::endl;
        std::cout << "Average Daily Balace:  $" << average_daily_balance() << std::endl;
        std::cout << "Minimum Daily Balance: $" << m_min_balance << std::endl;
        std::cout << "Total Intrest Earned:  $" << sum_total * 0.005 << std::endl;
}
