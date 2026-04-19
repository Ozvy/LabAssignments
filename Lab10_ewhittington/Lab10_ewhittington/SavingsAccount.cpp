#include "SavingsAccount.h"
#include <fstream>

SavingsAccount::SavingsAccount() : interest(1)
{
}

SavingsAccount::SavingsAccount(const string& accNum, double initialBalance, float interest, const Customer& customer)
    : Account(accNum, initialBalance, customer)
{    
    this->interest = interest;
}

void SavingsAccount::closeOfBusiness()
{
    double totalDeposits = accumulate(deposits.begin(), deposits.end(), 0.0);
    double totalWithdrawals = accumulate(withdrawals.begin(), withdrawals.end(), 0.0);

    double previousBalance = balance;
    double interestToApply = previousBalance <= 0 ? 0 : interest;
    double newBalance = (previousBalance + totalDeposits - totalWithdrawals) * (1 + interestToApply);

    printSummary(previousBalance, totalDeposits, totalWithdrawals, newBalance);

    balance = newBalance;

    deposits.clear();
    withdrawals.clear();
}

void SavingsAccount::printAccountInfo() const
{
    cout << "Account Number: " << accountNumber << endl;
    cout << "Current Balance: $" << balance << endl;
    cout << "Interest Rate: " << interest * 100 << "%" << endl;
    owner.printCustomerInfo();   
}
void SavingsAccount::Save() {
    /**
     * @brief Gathers the data from the savings account and saves it to account_summary.txt
     * @param none
     * @return 0 (void)
     */
    ofstream summaryData("account_summary.txt");
    summaryData << "Account Number: " << accountNumber << endl;
    summaryData << "Current Balance: $" << balance << endl;
    summaryData << "Interest Rate: " << interest * 100 << "%" << endl;
}