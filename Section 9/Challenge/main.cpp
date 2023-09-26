// Section 9
// Challenge
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
#include <iomanip>
#include <vector>
using namespace std;
int main () {
    //display menu
    //prompt user for input

    char user_choice {};
    vector <int> num{};
    bool done{false};

    while (!done){
    cout<<endl;
    cout<<"Welcome to Section 9 Challenge"<<endl;
    cout<<"P - Print numbers"<<endl;
    cout<<"A - Add a number"<<endl;
    cout<<"M - Display mean of the numbers"<<endl;
    cout<<"S - Dsplay the smallest number"<<endl;
    cout<<"L - Display the largest number"<<endl;
    cout<<"Q - Quit"<<endl;
    cout<<endl;
    cout<<"Enter your choice:"<<endl;

    cin>>user_choice;
        
        if (user_choice=='p'|| user_choice=='P') {
            if (num.size()>0) {
                cout<<"The numbers you selectected are:"<<endl;
                for (int number:num)
                    cout<<number<<endl;
           } else {
                cout<<"[] The list is empty"<<endl;
                cout<<endl;
           }
        } else if (user_choice=='a'||user_choice=='A') {
                    bool a_done {false};
                    int a_selection {};
                    while (!a_done) {
                    cout<<"Enter an integer to add to the list: ";
                    int a_selection {};
                     cin>>a_selection;
                     if (!cin) {
                         cout<<"You did not enter an integer, try again"<<endl;
                         cout<<endl;
                         cin.clear();
                         cin.ignore();
               }    else {
                        num.push_back(a_selection);
                        a_done=true;
                         
                    
              
        }}} else if (user_choice=='m'||user_choice=='M') {
                if (num.size()>0) {
                     double total {};
                    int count {};
                    count=num.size();
                    for (int number: num)
                        total+=number;
                        cout<<"The mean of your numbers is: "<<total/count<<endl;
                }
                else {
                    cout<<"Your collection is empty"<<endl;
                }
       } else if (user_choice=='l'||user_choice=='L') {
           if (num.size()>0){
                int highest_value {num[0]};
                for(int i {0}; i< num.size();++i)
                    for (int j=i+1;j <num.size();++j)
                        if (num[i]>num[j] && num[i]>highest_value) {
                            highest_value= num[i];
                        }else if (num[j]>num[i] && num[j]>highest_value){
                            highest_value=num[j];
                        }else {
                            ;
                        }
                cout<<highest_value<<endl;
                            
           }
           else {
            cout<<"Your collection is empty"<<endl;
      
       } } else if (user_choice=='s'||user_choice=='S'){
           if (num.size() >0) {
            int lowest_value {num[0]};
                for(int i {0}; i< num.size();++i)
                    for (int j=i+1;j <num.size();++j)
                        if (num[i]<num[j] && num[i]<lowest_value) {
                            lowest_value= num[i];
                        }else if (num[j]<num[i] && num[j]<lowest_value){
                            lowest_value=num[j];
                        }else {
                            ;
                        }
                cout<<lowest_value<<endl;
           }
           else {
               cout<<"Your collection is empty"<<endl;
           }
            
        }
        
        else if (user_choice=='q'||user_choice=='Q') {
                cout<<"Goodbye"<<endl;
                done= true;
        }
        else {
            cout<<"Sorry not a valid choice"<<endl;
       }
        


    }
    return 0;
}

