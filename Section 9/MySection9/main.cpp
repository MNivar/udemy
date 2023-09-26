#include <iostream>
#include <vector>
using namespace std;


// Practice Excercise 14: For loop - Sum of Odd Integers
//int main () {
//    int sum {0};
//    for (int i{0}; i <16; ++i)
//        if (i%2!=0) 
//            sum+=i; // += same as sum=sum+i
//cout<<endl;
//cout<<"The summation of all odd numbers is " <<sum<<endl;
//    return 0;
//}
// Coding Exercise 15: Using the range-based for loop
//int main () {
//    vector <int> vec {1,3,5,15,16,17,18,19,20,21,25,26,27,30,50,55,56,58,100,200,300,400,500,600,700};
//    int count {0};
//    for (int i{0}; i <vec.size();++i)
//        if (vec[i]%3==0 || vec[i]%5==0)
//            count+=1;
//        else
//            ;
//    cout<<endl;
//    cout<<"The number of elements divisible by 3 or 5 is "<<count<<endl;
//    return 0;
//}
// Practice Excercise 16: While Loop exercise
//int main () {
//    vector <int>  vecc {1,2,3,99,5,6};
//    int i {0};
//    
//    int count {0};
//    while (i < vecc.size() && vecc.at(i) !=99) { // [] does not do boundary checking
//        ++count;
//        ++i;
//    }
//    cout<<endl;
//    cout<<"Number of integers before reaching 99 is: "<<count<<endl;
//    return 0;
//}
// Practice Excercise 17: Nested Loop exercise
int main () {
    vector <int> veccc{1,2,3};
    int result {0};
    for (int i{0}; i<veccc.size();++i) {
        for (int j=1+i; j < veccc.size(); ++j)
            result+=veccc.at(i)*veccc.at(j);
    }                                        
    
    cout<<"The sum of the product pairs of all pairs of elements is: "<<result<<endl;
    return 0;
}