#include "Checking_Account.h"

Checking_Account::Checking_Account(std::string name, double balance)
: Account{name, balance} {
}


bool Checking_Account:: withdraw (double amount) {
    amount+= withdrawl_fee;
    return Account::withdraw(amount);
}

std::ostream &operator << (std::ostream &os, const Checking_Account &obj) {
    
    os << "[Checkings_Account :" << obj.name << ": " << obj.balance << ", " << obj.withdrawl_fee << " ]" ;
    return os;
}



