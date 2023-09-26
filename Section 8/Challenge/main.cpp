// Section 8 Challenge
/*
	For this program I will be using US dollars and cents.
	
    Write a program that asks the user to enter the following:
	An integer representing the number of cents 
    	
	You may assume that the number of cents entered is greater than or equal to zero
    
	The program should then display how to provide that change to the user.
	
	In the US:
		1 dollar is 100 cents
		1 quarter is 25 cents
		1 dime is 10 cents
		1 nickel is 5 cents, and
		1 penny is 1 cent.
		
	Here is a sample run:
	
	Enter an amount in cents :  92
	
	You can provide this change as follows:
	dollars    : 0
	quarters : 3
	dimes     : 1
	nickels   : 1
	pennies  : 2
	
	Feel free to use your own currency system.
	Also, think of how you might solve the problem using the modulo operator.

	Have fun and test your program!!

*/
#include <iostream>

using namespace std;

int main() {
    //User enter number of cents
    // Number of cents checked if divisble by cent denominations
    
    
    int cents {};
    const int dollar {100};
    const int quarter {25};
    const int dime {10};
    const int nickel {5};
    const int penny {1};
    int remaining_balance{};
    
   // bool dollar_divi {0} ;
    
    cout<<"Welcome to the change provider!" <<endl;
    cout<<"Enter a number of cents"<<endl;
    cin>>cents;
    
//    dollar_divi=((cents%dollar)>0);
//    cout<<dollar_divi<<endl;
    cout<<"Dollars: "<< cents / dollar << endl;
    remaining_balance = cents%dollar;
    //cout<<remaining_balance <<endl;
    
    cout<<"Quarters: "<< remaining_balance/quarter <<endl;
    remaining_balance=remaining_balance%quarter;
   // cout<<remaining_balance<< endl;
    
    cout<<"Dimes: " <<remaining_balance/dime<<endl;
    remaining_balance=remaining_balance%dime;
    //cout<<remaining_balance<< endl;
    
    cout<< "Nickels: " <<remaining_balance/nickel<<endl;
    remaining_balance=remaining_balance%nickel;
   // cout<<remaining_balance<< endl;
    
    cout<< "Pennies: " <<remaining_balance/penny<<endl;
    remaining_balance=remaining_balance%penny;
   // cout<<remaining_balance<< endl;
    
    cout << endl;
    return 0;
}


