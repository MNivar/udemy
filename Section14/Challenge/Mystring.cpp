#include <iostream>
#include <cstring>
#include "Mystring.h"

 // No-args constructor
Mystring::Mystring() 
    : str{nullptr} {
    str = new char[1];
    *str = '\0';
}

// Overloaded constructor
Mystring::Mystring(const char *s) 

    : str {nullptr} {
        if (s==nullptr) {
            str = new char[1];
            *str = '\0';
        } else {
            str = new char[strlen(s)+1];
            strcpy(str, s);
        }
        std::cout<<"overloaded contructor called"<<std::endl;
}

// Copy constructor
Mystring::Mystring(const Mystring &source) 
    : str{nullptr} {
        str = new char[strlen(source.str)+ 1];
        strcpy(str, source.str);
      std::cout << "Copy constructor used" << std::endl;

}

// Move constructor
Mystring::Mystring( Mystring &&source) 
    :str(source.str) {
        source.str = nullptr;
     std::cout << "Move constructor used" << std::endl;
}

 // Destructor
Mystring::~Mystring() {
    delete [] str;
}

 // Copy assignment
Mystring &Mystring::operator=(const Mystring &rhs) {
 std::cout << "Using copy assignment" << std::endl;


    if (this == &rhs)
        return *this;
    delete [] this->str;
    str = new char [std::strlen(rhs.str)+1];

    std::strcpy(str, rhs.str);

    return *this;

    
}



// Move assignment
Mystring &Mystring::operator=( Mystring &&rhs) {
 std::cout << "Using move assignment" << std::endl;

 
    if (this == &rhs) 
        return *this;
    delete [] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}

 


// Display method
void Mystring::display() const {
    std::cout << str << " : " << get_length() << std::endl;
}

 // getters
 int Mystring::get_length() const { return strlen(str); }
 const char *Mystring::get_str() const { return str; }

// overloaded insertion operator
std::ostream &operator<<(std::ostream &os, const Mystring &rhs) {
    os << rhs.str;
    return os;
}

// overloaded extraction operator
std::istream &operator>>(std::istream &in, Mystring &rhs) {
    char *buff = new char[1000];
    in >> buff;
    rhs = Mystring{buff};
    delete [] buff;
    return in;
}

 //****Using member methods:*********
 
 //**overloaded == operator**
 
 bool Mystring::operator==(const Mystring &rhs) {
     return (std::strcmp(rhs.str, str)==0);
 }
 
//***overloaded > operator***

bool Mystring::operator > (const Mystring &rhs) {
    return (std::strcmp(rhs.str, str) < 0);
}

// **overloaded + operator **

Mystring Mystring::operator +(const Mystring &rhs) {
    
    char *buff = new char [std::strlen(str) + std::strlen(rhs.str) +1 ];
    std::strcpy(buff, str);
    std::strcat(buff, rhs.str);

    Mystring temp {buff};
    
    delete [] buff;
    
    return temp;

}
     
//**overloaded += operator**

Mystring Mystring::operator += (const Mystring &rhs) {
    char *buff = new char [std::strlen(str) + std::strlen(rhs.str) +1 ];
    std::strcpy(buff, str);
    std::strcat(buff, rhs.str);
    
    delete [] str;
    
    str=buff;
    
    return str;
}

// **overloaded - operator **

Mystring Mystring::operator - () {
    for ( size_t i {0}; i< std::strlen(str) ; ++i)
        str[i]= tolower (str[i]);
    return str;
}
 
// overloaded == operator
/*
bool operator == (const Mystring &lhs, const Mystring &rhs) {
    
    if ((std::strcmp (lhs.str, rhs.str))== 0)
        return true;
    else
        return false;
}
 */
//overloaded != operator
bool operator != (const Mystring &lhs, const Mystring &rhs) {
    
    if ((std::strcmp (lhs.str, rhs.str))==0)
        return false;
    else
        return true;
}
/*
//overloaded > operator
bool operator > (const Mystring &lhs, const Mystring &rhs) {
    return (std::strcmp(rhs.str, lhs.str) <0);
}
*/
       
//overloaded < operator

bool operator < (const Mystring &lhs, const Mystring &rhs) {
    return (std::strcmp(rhs.str, lhs.str) >0);
}

/*
//overloaded - operator
Mystring operator - (Mystring &obj) {
    for (size_t i{0}; i<std::strlen(obj.str);++i)
      obj.str[i]=tolower(obj.str[i]);
        return obj;
}
 * */

/*
//overloaded + operator

Mystring operator + (const Mystring &lhs, const Mystring &rhs) {
    char *buff = new char [std::strlen(lhs.str) + std::strlen(rhs.str)+1];
    
    std::strcpy(buff,lhs.str); // copying lhs string to the buff
    std::strcat(buff, rhs.str); // then concatnating with the rhs
    
    Mystring temp {buff};
    
    delete [] buff;

    return temp;
}
*/

/*
//overloaded += operator
Mystring operator += (Mystring &lhs, const Mystring &rhs) {
    char *buff = new char [std::strlen(lhs.str) + std::strlen(rhs.str)+1];
    std::strcpy(buff,lhs.str); // copying lhs string to the buff
    std::strcat(buff, rhs.str); // then concatnating with the rhs
    
    delete [] lhs.str;
    lhs.str= buff;
    
    return lhs;
}
 * */

//overloaded * operator
Mystring operator * (const Mystring &lhs, int multiplier) {
    char *buff = new char [(std::strlen(lhs.str) * multiplier)+1];
    for (size_t i {0};i<multiplier;++i)
        std::strcat(buff, lhs.str);
    Mystring temp {buff};
    
    delete [] buff;
    return temp;
}

//overloaded *= operator
Mystring operator *= (Mystring &lhs, int multiplier) {
    char *buff = new char [(std::strlen(lhs.str) * multiplier)+1];
    for (size_t i {0};i<multiplier;++i)
        std::strcat(buff, lhs.str);
    delete  [] lhs.str;
    lhs.str = buff;
    return lhs;
}

//overloaded ++operator (pre-increment)
Mystring operator ++(Mystring &obj) {
//    char buff = new char [std::strlen(obj.str) +1]; // do not need to create a buff, because the direct object is getting modified
    for (size_t i{0};i<std::strlen(obj.str); ++i)
        obj.str[i] = toupper(obj.str[i]);
    return obj;
}

//overloaded --operator
Mystring operator -- (Mystring &obj) {
    for (size_t i{0}; i<(std::strlen(obj.str) +1);++i)
        obj.str[i] = tolower(obj.str[i]);
    return obj;  
}

//overloaded ++operator (post-increment) 
Mystring operator ++(Mystring &obj, int) {
    Mystring temp {obj};
    ++obj;
    return temp;
}
