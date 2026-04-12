#include<iostream>
#include "Account.h"

/**
* @File Lab9_ewhittington.cpp
* @Author: Ender Whittington
* @Date: 2026-4-12
* @brief A banking simulation interacting with Account and Customer objects.
*/


void printMenu();
int getMenuOption();
bool isAmountValid(double amount);
bool isMenuChoiceValid(int choice);
void printInvalidMenuChoiceMessage();

const int DEPOSIT = 1;
const int WITHDRAWAL = 2;
const int CLOSE_OF_BUSINESS = 3;
const int QUIT = 4;

int main()
{
    /**
    * @brief Entry point for the banking application.
    * @return 0 to indicate success.
    */

    Customer customer("0123456789", "customer@cscc.edu");
    SavingsAccount account("5423678409", 100.00, customer, 0.005);
    Account* accountPtr = &account;
    account.printAccountInfo();

    int menuChoice = getMenuOption();
    while (menuChoice != QUIT)
    {
        switch (menuChoice)
        {
        case DEPOSIT:
            float depositAmount;
            cout << "Please enter a deposit amount:";
            cin >> depositAmount;
            if (isAmountValid(depositAmount)) {
                account.deposit(depositAmount);
            }
            break;
        case WITHDRAWAL:
            float withdrawalAmount;
            cout << "Please enter a withdrawal amount:";
            cin >> withdrawalAmount;
            if (isAmountValid(withdrawalAmount)) {
                account.withdraw(withdrawalAmount);
            }
            break;
        case CLOSE_OF_BUSINESS:
            account.closeOfBusiness();
            break;
        }

        menuChoice = getMenuOption();
    }
}

void printMenu()
{
    cout << "\nCSCC Bank and Trust" << endl;
    cout << "Select an option:" << endl;
    cout << DEPOSIT << ". Make a deposit" << endl;
    cout << WITHDRAWAL << ". Make a withdrawal" << endl;
    cout << CLOSE_OF_BUSINESS << ". Close of Business" << endl;
    cout << QUIT << ". Quit" << endl;
}

int getMenuOption()
{
    int choice = 0;

    do
    {
        printMenu();
        cin >> choice;

        if (!isMenuChoiceValid(choice))
        {
            printInvalidMenuChoiceMessage();
        }
    } while (!isMenuChoiceValid(choice));

    return choice;
}

bool isMenuChoiceValid(int choice)
{
    return choice >= DEPOSIT and choice <= QUIT;
}

bool isAmountValid(double amount)
{
    return amount > 0;
}

void printInvalidMenuChoiceMessage()
{
    cout << "Invalid option selected. Please try again." << endl;
}