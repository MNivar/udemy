#include <iostream>
#include<cstring>
#include<cctype>
 using namespace std;
 //Coding Exercise 18: Using C-style strings
// int main () {
//     char first_name[7] {"Bjarne"};
//     char last_name[11] {"Stroustrup"};
//     char whole_name[100];
// 
//     int first_name_length= strlen(first_name);
//     size_t last_name_length {strlen(last_name)};
//
//    strcpy(whole_name, first_name);
//    strcat(whole_name, last_name);
//    
//    size_t whole_name_length {strlen(whole_name)};
//    
//    cout<<"\nWhole name is: "<<whole_name<<"\tLength is "<<whole_name_length<<endl;
//    
//     return 0;
//
//
//
//
// }
 // Coding Exercise 19: Using C++ Strings, #1
 
// int main() {
//     string unformatted_full_name {"StephenHawking"};
//     string first_name {unformatted_full_name,0, 7};
//     string last_name {unformatted_full_name, 7,7};
//     cout<<first_name<<" "<<last_name<<endl;
//     string formatted_full_name = first_name + " " +last_name;
//     cout<<formatted_full_name<<endl;
//     
//     
//     return 0;
// }

 // Coding Exercise 19: Using C++ Strings, #2
 
 int main() {
  
    string journal_entry_1 {"Isaac Newton"};
    string journal_entry_2 {"Leibniz"};

    journal_entry_1.erase(0,6);
    cout<<journal_entry_1<<endl;
    
    if (journal_entry_1 < journal_entry_2) 
        ;
    
    else 
        swap(journal_entry_1, journal_entry_2);
    
    cout<<journal_entry_1<<" "<<journal_entry_2<<endl;
     
     
     
     return 0;
 }