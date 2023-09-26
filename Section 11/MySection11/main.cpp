#include <iostream>
#include <cmath>
#include <string>
using namespace std;


// Coding Exercise 21: Using Functions from the cmath library
//int main() {
//    
//    
//    
//    double bill_total {102.78};
//    int number_of_guests {5}; 
//    
//    double individual_bill {bill_total/number_of_guests};
//    
//    cout<<individual_bill<<endl;
//    
//    double individual_bill_1 {floor(individual_bill)};
//    double individual_bill_2 {round(individual_bill)};
//    double individual_bill_3 {(ceil(100*individual_bill))/100};
//    
//    cout<<individual_bill_1<<endl;
//    cout<<individual_bill_2<<endl;
//    cout<<individual_bill_3<<endl;
//    
//    return 0;
//
//}


// Coding Exercise 22: Functions and Prototypes - Converting Temperatures

//double fahrenheit_to_celsius(double);
//double fahrenheit_to_kelvin(double);


//int main () {
//    
//    double celsius_temperature = fahrenheit_to_celsius(100.00);
//    double kelvin_temperature = fahrenheit_to_kelvin(100.00);
//    
//    cout<<celsius_temperature<<endl;
//    cout<<kelvin_temperature<<endl;
//    
//    return 0;
//}
//
//double fahrenheit_to_celsius(double temp) {
//    return round((5.0/9.0)*(temp-32));
//}
//
//double fahrenheit_to_kelvin(double temp) {
//    return round(((5.0/9.0)*(temp-32))+273);
//}

// Coding Exercise 26: Using Pass by Reference to Print a Guest List 

void print_guest_list(const string &, const string &, const string &);
void clear_guest_list(string&,  string &, string &);


//int main () {
//    
//    string guest_1 {"Larry"};
//    string guest_2 {"Moe"};
//    string guest_3 {"Curly"};
//    
//    print_guest_list(guest_1, guest_2, guest_3);
//    clear_guest_list(guest_1,guest_2,guest_3);
//    
//    cout<<"Here is the guest list now: "<<endl<<guest_1<<endl<<guest_2<<endl<<guest_3<<endl;
//    
//}
//
//void print_guest_list(const string &guest1,const string &guest2, const string &guest3) {
//    
//    cout<<guest1<<endl<<guest2<<endl<<guest3<<endl;
//
//}
//
//void clear_guest_list(string &guest1,string &guest2, string &guest3) {
//    
//    guest1=" ";
//    guest2=" ";
//    guest3=" ";
//}

double a_penny_doubled_everyday(int, double amount=.01);


int main() {

double total_amount= a_penny_doubled_everyday(3);
cout<<total_amount<<endl;
    
    return 0;
}

double a_penny_doubled_everyday(int n, double amount) {
    if (n<=1) 
        return amount; 
    
    else
        return a_penny_doubled_everyday(--n,amount*2);
   
   
}
    