#include <iostream>
#include "Account_Util.h"

// Displays Account objects in a  vector of Account objects 
void display(const std::vector<Account> &accounts) {
    std::cout << "\n=== Accounts ==========================================" << std::endl;
    for (const auto &acc: accounts) 
        std::cout << acc << std::endl;
}

// Deposits supplied amount to each Account object in the vector
void deposit(std::vector<Account> &accounts, double amount) {
    std::cout << "\n=== Depositing to Accounts =================================" << std::endl;
    for (auto &acc:accounts)  {
        if (acc.deposit(amount)) 
            std::cout << "Deposited " << amount << " to " << acc << std::endl;
        else
            std::cout << "Failed Deposit of " << amount << " to " << acc << std::endl;
    }
}

// Withdraw amount from each Account object in the vector
void withdraw(std::vector<Account> &accounts, double amount) {
    std::cout << "\n=== Withdrawing from Accounts ==============================" <<std::endl;
    for (auto &acc:accounts)  {
        if (acc.withdraw(amount)) 
            std::cout << "Withdrew " << amount << " from " << acc << std::endl;
        else
            std::cout << "Failed Withdrawal of " << amount << " from " << acc << std::endl;
    } 
}


// Helper functions for Savings Account class

// Displays Savings Account objects in a  vector of Savings Account objects 
void display(const std::vector<Savings_Account> &accounts) {
    std::cout << "\n=== Savings Accounts ====================================" << std::endl;
    for (const auto &acc: accounts) 
        std::cout << acc << std::endl;
}

// Deposits supplied amount to each Savings Account object in the vector
void deposit(std::vector<Savings_Account> &accounts, double amount) {
    std::cout << "\n=== Depositing to Savings Accounts ==========================" << std::endl;
    for (auto &acc:accounts)  {
        if (acc.deposit(amount)) 
            std::cout << "Deposited " << amount << " to " << acc << std::endl;
        else
            std::cout << "Failed Deposit of " << amount << " to " << acc << std::endl;
    }
}

// Withdraw supplied amount from each Savings Account object in the vector
void withdraw(std::vector<Savings_Account> &accounts, double amount) {
    std::cout << "\n=== Withdrawing from Savings Accounts ======================" << std::endl;
    for (auto &acc:accounts)  {
        if (acc.withdraw(amount)) 
            std::cout << "Withdrew " << amount << " from " << acc << std::endl;
        else
            std::cout << "Failed Withdrawal of " << amount << " from " << acc << std::endl;
    } 
}

//Helper Functions for Checkings Account

// Display Checking accounts

void display(const std::vector <Checking_Account> &accounts) {
    for (auto &acc : accounts)
        std::cout<< acc<< std::endl;
}
        
// Deposits supplied amount to each Checkings Account object in the vector

void deposit (std::vector<Checking_Account> &accounts , double amount) {
    for (auto &acc : accounts)
        if (acc.deposit(amount))
            std::cout << "Deposited " << amount << " to " << acc << std::endl;
        else
            std::cout<<"Failed deposit of amount: " <<amount<< " to " << acc<< std::endl;     
}

void withdraw (std::vector <Checking_Account> &accounts, double amount) {
    std::cout << "\n=== Withdrawing from Checking Accounts ======================" << std::endl;
    for (auto &acc:accounts)
        if (acc.withdraw(amount))
            std::cout<< "Withdrew " <<amount <<" from " <<acc<<std::endl;
        else
            std::cout<<"Withdraw of amount: " << amount<< " from " << acc<< " failed" <<std::endl;
}

// Display Trust Accounts
void display(const std::vector<Trust_Account> &accounts) {
    for (auto &acc : accounts)
        std::cout<< acc <<std::endl;
}


//Deposit into Trust Accounts
void deposit (std::vector<Trust_Account> &accounts, double amount) {
    std::cout << "\n=== Depositing into Trust Accounts ======================" << std::endl;
    for (auto &acc : accounts)
        if (acc.deposit(amount))
            std::cout<< "Deposit of amount " << amount << " to " << acc << std::endl;
        else
            std::cout<<"Deposit of amount " << amount << " to " << acc << " failed" <<std::endl;
}


void withdraw(std::vector<Trust_Account> &accounts, double amount) {
    std::cout << "\n=== Withdrawing from Trust Accounts ======================" << std::endl;
    for (auto &acc: accounts)
        if (acc.withdraw(amount))
            std::cout<<"Withdraw of amount " << amount << " from " <<acc<< std::endl;
        else
            std::cout<<"Withdraw of amount " << amount<< " from " <<acc << " failed"<<std::endl;
}