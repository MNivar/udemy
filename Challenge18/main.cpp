#include <iostream>
#include <memory>
#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"



using namespace std;

int main() {
    

//    Account *dog = new Savings_Account ("Dog",2000);
//    Account *cat = new Savings_Account ("Cat",2000);
//    std::cout<<*dog;
    
//    std::vector <Account*> account_objects;
//
//    account_objects.push_back(dog);
//    account_objects.push_back(cat);
//    account_objects.push_back(Stella.get());

//        std::unique_ptr <Account> Stella ( new Savings_Account {"Stella",-1000});
//            std::cout<<*Stella;
    
    try {
        std::unique_ptr <Account> Stella ( new Savings_Account {"Stella",-1000});
            std::cout<<*Stella;
    }
    catch (const IllegalBalanceException &ex) {
        std::cout<<ex.what()<<std::endl;
            std::cout<<"exception caught"<<std::endl;
    
    }
    
        std::unique_ptr<Account> Dog ( new Savings_Account {"Dog", 1000});
        std::cout<<*Dog;
        Dog->withdraw(2000);
    
//    try {
//        std::unique_ptr<Account> Dog ( new Savings_Account {"Dog", 1000});
//        std::cout<<*Dog;
//        Dog->withdraw(2000);
//    }
//    
//    catch (const InsufficentFundsException &ex) {
//        
//        std::cout<<"\n"<<ex.what()<<std::endl;
//        std::cout<<"insufficient funds caught"<<std::endl;
//    }
    
    //delete dog;
    std::cout << "Program completed successfully" << std::endl;
    return 0;
}

