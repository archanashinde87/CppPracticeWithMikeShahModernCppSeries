/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <typeinfo>

void passByValue(int arg)
{
    std::cout << "arg's address is : "  << &arg<< std::endl;
    arg = 9999;
}
void passByReference(int& alias)
{
    std::cout << "alias's address is : "  << &alias<< std::endl;
    alias = 9999;
}

int main()
{
    int x{42};
    std::cout << "x's value is : " << x << "\tx's address is: " << &x << std::endl;
    //passByValue(x);
    passByReference(x);
    std::cout << "x's value is : "<< x << "\tx's address is: " << &x << std::endl;
    
    return 0;
}

/*
result for before and after passByValue(x) call - address of arg and x is different and value of x getting copied in to arg
x's value is : 42       x's address is: 0x7ffd278fdc74
arg's address is : 0x7ffd278fdc5c
x's value is : 42       x's address is: 0x7ffd278fdc74

result for before and after passByReference(x) call - address of alias and x is same - it means alias is just another name for x
x's value is : 42       x's address is: 0x7fff6286dc84
alias's address is : 0x7fff6286dc84
x's value is : 9999     x's address is: 0x7fff6286dc84
*/
