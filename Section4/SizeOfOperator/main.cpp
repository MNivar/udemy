#include <iostream>
using namespace std;
int main() {
    cout << "size of information"<< endl;
    cout << "int:" << sizeof(int)<<"bytes." <<endl;
    cout <<"unsigned int:" << sizeof(unsigned int) << "bytes" <<endl;
    cout <<"short:" <<sizeof(short) << "bytes" <<endl;
    cout <<"long:" <<sizeof(long) << "bytes" <<endl;
    cout <<"long long:" <<sizeof(long long) << "bytes" <<endl;
    
    
    cout << "============================================="<< endl;
    cout << "char:" << CHAR_MIN <<endl;
    cout <<"int:" <<INT_MIN <<endl;
    cout <<"short:"<<SHRT_MAX<<endl;
    
    return 0;
}