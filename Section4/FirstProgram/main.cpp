#include <iostream> //we need the input/output libraries, so compiler understannds cout, cin
int main() {
    int favorite_number; //states that variable favorite_number is an integer
    std::cout << "Enter your favorite number between 1 and 100:";// outputting into console
    std::cin >> favorite_number; //stored into variable
    std::cout<<"Amazing!! That is my favorite number too!"<< std::endl;
    return 0;   
}