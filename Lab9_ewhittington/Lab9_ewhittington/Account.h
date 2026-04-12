#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>
#include <vector>
#include "Customer.h"
using namespace std;

class Account {
private:
    
    
protected: 

    Customer owner;
    string accountNumber;

    vector<double> deposits;
    vector<double> withdrawals;

    void printSummary(double previousBalance, double totalDeposits, double totalWithdrawals, double newBalance) const;

    double balance;

public:
    Account();
    Account(const string& accNum, double initialBalance, const Customer& customer);

    bool deposit(double amount);
    bool withdraw(double amount);

    virtual void closeOfBusiness();

    double getBalance() const;
    string getAccountNumber() const;
    Customer getCustomer() const;

    virtual void printAccountInfo() const;
    void printTransactions() const;
};

class SavingsAccount : public Account {
private:
    double dailyInterestRate;

public:
    SavingsAccount(const string& accNum, double initialBalance, const Customer& customer, double interestRate);
    void closeOfBusiness() override;
    virtual void printAccountInfo() const;
};
#endif
