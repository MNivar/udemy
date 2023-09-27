#include <iostream>
#include <memory>
#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"



using namespace std;

int main() {
    
   
    try {
        std::unique_ptr <Account> Stella ( new Savings_Account {"Stella",-1000});
            std::cout<<*Stella<<std::endl;
    }
    catch (const IllegalBalanceException &ex) {
        std::cout<<ex.what()<<std::endl;
            std::cout<<"Illegal Balance exception caught"<<std::endl;
    
    }

   
   
   try {
    std::unique_ptr<Account> Dog(new Savings_Account{"Dog", 1000});
    std::cout << *Dog <<std::endl;
    Dog->withdraw(2000);
} 
    catch (const InsufficientFundsException &ex) {
        std::cerr << ex.what() << std::endl;
        std::cout<<"Insufficient Funds exception caught"<<std::endl;
    }
        catch (const IllegalBalanceException &ex) {
        std::cout<<ex.what()<<std::endl;
            std::cout<<"Illegal Balance exception caught"<<std::endl;
    
    }

  



    std::cout << "Program completed successfully" << std::endl;
    return 0;
}

