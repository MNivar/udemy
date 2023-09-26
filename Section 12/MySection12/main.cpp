#include <iostream>
using namespace std;

int main() {
    
    int array1[] {1,2,3,4,5};
    int array2[] {10,20,30};
    int counter {};
    
    size_t size1 {5};
    size_t size2 {3};
    size_t size3 {15};
    
//    for (auto num2:array2)
//        for (auto num1:array1)
//            cout<<num1*num2<<endl;

    for (size_t j{0};j<size2; ++j)
        for (size_t k{0};k<size1;++k) {
            cout<<array1[k]*array2[j]<<endl;
            ++counter;
            cout<<counter<<endl;
            
        }
            
    
}