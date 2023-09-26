#include "Trust_Account.h"


Trust_Account::Trust_Account(std::string name, double balance, double int_rate)
    : Savings_Account {name, balance, int_rate}
{
}

bool Trust_Account::deposit(double amount) {
    if (amount >= 5000) {
        amount+=50;
        return Savings_Account::deposit(amount);
        
    }
    else
        return Savings_Account::deposit(amount);
}

bool Trust_Account::withdraw(double amount) {
    if (counter > 3 || (amount > balance * max_withdraw_percent))
        return false;
    else {
        ++counter;
        return Savings_Account::withdraw(amount);
        
    }
}
    

std::ostream &operator << (std::ostream &os, const Trust_Account &obj) {
    
    os << "Trust_Account:" << obj.name <<": "<< obj.balance << ", " << obj.int_rate <<"%, withdrawals:" << obj.counter << "]";
    
    return os;
}

