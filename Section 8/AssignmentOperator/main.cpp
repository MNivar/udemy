// Section 8
// Assignment operator (=)

#include <iostream>

using namespace std;

int main() {
    
    int num1 {10}; //initializing, not an assignment, gets value for the first time
    int num2 {20};
    
    num = 100; //assignment. r-value contents is 10. store 100 into the location of num1
    
    cout << "num1 is " << num1 << endl;
    cout << "num2 is " << num2 << endl;

    cout << endl;
    return 0;
}

