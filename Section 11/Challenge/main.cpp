// Section 11
// Challenge 
/*
     Recall the challenge from Section 9 below.
    Your challenge for section 11 is to modularize your solution to the Section 9
    challenge by refactoring your solution so that it uses uses functions.
    
    You decide how to modularize the program.
    you can use my solution which is included in this file, or modularize your solution.
    
    Here are a few hints:
        - Create functions for each major function
        - Keep the functions small
        - Remember the Boss/Worker analogy
        - Keep the vector declaration in the main function and pass the vector object
          to any function that requires it

        DO NOT move the vector object outside main and make it a global variable.
    
        - You can start by defining a function that displays the menu
        - You can then define a function that reads the selection from the user and returns it in uppercase
        - Create functions for each menu option
        - Create functions that display the list of numbers, calculates the mean and so forth
        
    Take it one function at a time and take your time.
    If you get frustrated, take a break -- this isn't as easy as it looks the first time you do it!
    
    Finally,  don't forget to use function prototypes!
    
    Good luck -- I know you can do it!
*/
/*    
    This challenge is about using a collection (list) of integers and allowing the user
    to select options from a menu to perform operations on the list.
    
    Your program should display a menu options to the user as follows:
    
    P - Print numbers
    A - Add a number
    M - Display mean of the numbers
    S - Display the smallest number
    L - Display the largest number
    Q - Quit

    Enter your choice:
    
The program should only accept valid choices from the user, both upper and lowercase selections should be allowed.
If an illegal choice is made, you should display, "Unknown selection, please try again" and the menu options should be
displayed again.


If the user enters 'P' or 'p', you should display all of the elements (ints) in the list.
If the list is empty you should display "[] - the list is empty"
If the list is not empty then all the list element should be displayed inside square brackets separated by a space. 
For example, [ 1 2 3 4 5 ]
      
If the user enters 'A' or 'a' then you should prompt the user for an integer to add to the list 
which you will add to the list and then display it was added. For example, if the user enters 5
You should display, "5 added".
Duplicate list entries are OK

If the user enters 'M' or 'm'  you should calculate the mean or average of the elements in the list and display it.
If the list is empty you should display, "Unable to calculate the mean - no data"

If the user enters 'S' or 's' you should display the smallest element in the list.
For example, if the list contains [2 4 5 1],  you should display, "The smallest number is 1"
If the list is empty you should display, "Unable to determine the smallest number - list is empty"

If the user enters 'L' or 'l' you should display the largest element in the list
For example, if the list contains [2 4 5 1], you should display, "The largest number is 5"
If the list is empty you should display, "Unable to determine the largest number - list is empty"

If the user enters 'Q' or 'q' then you should display 'Goodbye" and the program should terminate.

Before you begin. Write out the steps you need to take and decide in what order they should be done.
Think about what loops you should use as well as what you will use for your selection logic.

This exercise can be challenging! It may likely take a few attempts before you complete it -- that's OK!

Finally, be sure to test your program as you go and at the end.

Hint: Use a vector!

Additional functionality if you wish to extend this program.

- search for a number in the list and if found display the number of times it occurs in the list
- clearing out the list (make it empty again) (Hint: the vector class has a .clear() method)
- don't allow duplicate entries
- come up with your own ideas!

Good luck!

*/
#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

void display_menu();
void print_numbers(const vector <int> &);
void add_number(int, vector <int> &);
void mean_of_numbers(vector <int> &);
void largest_number(vector <int> &);
void smallest_number(vector <int> &);
void find_number(const vector <int> &v);
bool check_number(const vector <int> &, const int &);


int main() {
    
    bool done {false};
    vector <int> numbers {};
    cout<<"\nWelcome to Section 11 Challenge!"<<endl;

    
    while (!done) {
        display_menu(); // To display main menu
        cout<<"Enter your choice"<<endl;
        char user_choice {};
        cin>>user_choice;

        
            if (user_choice == 'p' || user_choice=='P') {
                print_numbers(numbers);
                
            }
            else if (user_choice =='a' || user_choice == 'A') {
                int user_choice_for_a {};
                do {
                    cin.clear();
                    cin.ignore();
                    cout<<"Enter your choice!";
                    cin>>user_choice_for_a;
                }
                while (!cin);
                
                add_number(user_choice_for_a,numbers);

                
            }
            else if (user_choice=='m' || user_choice=='M') {
                mean_of_numbers(numbers);
            }
            
            else if (user_choice=='l' || user_choice =='L') {
                largest_number(numbers);
            }
            
            else if (user_choice=='s' || user_choice=='S') {
                smallest_number(numbers);
            }
            
            else if (user_choice=='q' || user_choice=='Q') {
                cout<<"Good bye"<<endl;
                done = true;
            } 
            
            else if (user_choice=='f' ||  user_choice=='F') {
                find_number(numbers);
            }
                
            
            else 
                cout<<"unknown selection try again"<<endl;
    
    }
    return 0;
}

void display_menu(){
    
    cout<<"\nP - Print numbers"<<endl;
    cout<<"A - Add a number"<<endl;
    cout<<"M - Display mean of the numbers"<<endl;
    cout<<"S - Display the smallest number"<<endl;
    cout<<"L - Display the largest number"<<endl;
    cout<<"F - Find number"<<endl;
    cout<<"Q - Quit"<<endl;
}

void print_numbers(const vector <int> &v) {
    if (v.size()==0) 
        cout<<"[        ]"<<endl;
    else 
        cout<<"[ "<<endl;
        for (auto num:v)
            cout<<num<<endl;
        cout<<" ]"<<endl;
}

void add_number (int user_choice_for_a, vector <int> &vv) {
    vv.push_back(user_choice_for_a);
}

void mean_of_numbers(vector <int> &v) {
    if (v.size() ==0)
        cout<<"There are no numbers to take a mean"<<endl;
    else {
        double total {0};
        for (auto num:v)
            total += num;
        double mean = total/v.size();
        cout<<"The mean of your numbers is: "<<setprecision(4)<<mean<<endl;
    }
}

void largest_number(vector <int> &v) {
    if (v.size()==0)
        cout<<"There cannot be a largest number if your set is empty!"<<endl;
    else {
        int comparison {v.at(0)};
            for (auto num:v)
                if (num > comparison)
                comparison = num;
            cout<<"The largest number in your set is: "<<comparison<<endl;
} }

void smallest_number(vector <int> &v) {
    
    if (v.size()==0)
        cout<<"There cannot be a smallest number if your set is empty!"<<endl;
    else {
        int comparison {v.at(0)};
            for (auto num:v)
                if (num < comparison)
                comparison = num;
            cout<<"The smallest number in your set is: "<<comparison<<endl;
}}

void find_number(const vector <int> &v) {
    int find_number {};
   do {
        cin.clear();
        cin.ignore();
        cout<<"What number do you wish to find?"<<endl; 
        cin>>find_number;
   }

    while  (!cin);
        
    if (check_number(v,find_number))
        cout<<"Your number was found!"<<endl;
    else
        cout<<"Your number was not found!"<<endl;

}

bool check_number(const vector <int> &v, const int &find_number) {
    for (auto num:v) 
        if (num==find_number) 
            return true;
    return false;

}
