/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>

void setValue(int arg)
{
    std::cout << "arg's value is : " << arg << "\targ's address is: " << &arg << std::endl;
    arg = 9999;
    std::cout << "arg's value is : " << arg << "\targ's address is: " << &arg << std::endl;
}

int main()
{
    int x = 42;
    
    std::cout << "x's value is : " << x << "\tx's address is: " << &x << std::endl;
    setValue(x);
    std::cout << "x's value is : " << x << "\tx's address is: " << &x << std::endl;
    
    return 0;
}

