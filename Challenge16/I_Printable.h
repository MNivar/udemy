#ifndef I_PRINTABLE_H
#define I_PRINTABLE_H

#include <iostream>

class I_Printable { //abstract class
    friend std::ostream &operator<<(std::ostream &os, const I_Printable &obj);
    public:
        virtual void print(std::ostream &os) const = 0; // pure virtual function
        virtual ~I_Printable() = default;
        };

#endif // I_PRINTABLE_H
