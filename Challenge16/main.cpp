// Section 16 
// Challenge 
#include <iostream>
#include <vector>
#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std; 

int main() {
    cout.precision(2);
    cout << fixed;
   
    // Accounts
//    vector<Account> accounts;
//    accounts.push_back(Account {});
//    accounts.push_back(Account {"Larry"});
//    accounts.push_back(Account {"Moe", 2000} );
//    accounts.push_back(Account {"Curly", 5000} );
//    
//    display(accounts);
//    deposit(accounts, 1000);
//    withdraw(accounts,2000);
    
    // Savings 
    Account *a1 = new Savings_Account();
    Account *a2 = new Savings_Account("Superman");
    Account *a3 = new Savings_Account("Batman", 2000);
    Account *a4 = new Savings_Account ("Wonderwoman", 5000, 5.0);
    
    std::vector<Account*> sav_accounts {a1,a2,a3,a4};

  
//    vector<Savings_Account> sav_accounts;
//    sav_accounts.push_back(Savings_Account {} );
//    sav_accounts.push_back(Savings_Account {"Superman"} );
//    sav_accounts.push_back(Savings_Account {"Batman", 2000} );
//    sav_accounts.push_back(Savings_Account {"Wonderwoman", 5000, 5.0} );

    display(sav_accounts);
    deposit(sav_accounts, 1000);
    withdraw(sav_accounts,2000);
   
//   // Checking
//   
    Account *c1 = new Checking_Account();
    Account *c2 = new Checking_Account("Kirk");
    Account *c3 = new Checking_Account("Spock", 2000);
    Account *c4 = new Checking_Account("Bones", 5000);
    
    std::vector<Account*> check_accounts {c1,c2,c3,c4};
    
//    vector<Checking_Account> check_accounts;
//    check_accounts.push_back(Checking_Account {} );
//    check_accounts.push_back(Checking_Account {"Kirk"} );
//    check_accounts.push_back(Checking_Account {"Spock", 2000} );
//    check_accounts.push_back(Checking_Account {"Bones", 5000} );
//
    display(check_accounts);
    deposit(check_accounts, 1000);
    withdraw(check_accounts, 2000);
//
//    // Trust

    Account *t1 = new Trust_Account();
    Account *t2 = new Trust_Account("Athos", 10000, 5.0);
    Account *t3 = new Trust_Account("Porthos", 20000, 4.0);
    Account *t4 = new Trust_Account("Aramis", 30000);
    
    std::vector<Account*> trust_accounts {t1,t2,t3,t4};
//  
//    vector<Trust_Account> trust_accounts;
//    trust_accounts.push_back(Trust_Account {} );
//    trust_accounts.push_back(Trust_Account {"Athos", 10000, 5.0} );
//    trust_accounts.push_back(Trust_Account {"Porthos", 20000, 4.0} );
//    trust_accounts.push_back(Trust_Account {"Aramis", 30000} );
//
    display(trust_accounts);
    deposit(trust_accounts, 1000);
    withdraw(trust_accounts, 3000);
//    
    // Withdraw 5 times from each trust account
    // All withdrawals should fail if there are too many withdrawals or if the withdrawl is > 20% of the balance
    for (int i=1; i<=4; i++)
        withdraw(trust_accounts, 1000);
//    

    delete a1;
    delete a2;
    delete a3;
    delete a4;
    
    delete c1;
    delete c2;
    delete c3;
    delete c4;
    
    delete t1;
    delete t2;
    delete t3;
    delete t4;
    
    return 0;
}

