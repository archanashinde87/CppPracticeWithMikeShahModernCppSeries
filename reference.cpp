/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <typeinfo>
int main()
{
    int x{42};
    int& ref{x}; 
    
    //int* y{nullptr};
    //int*& ref2{y}; // reference to dereferenced null pointer is illegal though some compilers compiles it fine.
    //std::cout << ref2 << std::endl;
    
    std::cout << "x's value is : " << x << "\tx's address is: " << &x <<"\ttypeid for x is: " << typeid(x).name()<< std::endl;
    std::cout << "ref's value is : "<< ref << "\tref's address is: " << &ref <<"\ttypeid for ref is: " << typeid(ref).name() << std::endl;
    
    return 0;
}
/*
x's value is : 42       x's address is: 0x7ffc6024c60c   typeid for x is: i
ref's value is : 42     ref's address is: 0x7ffc6024c60c typeid for ref is: i
*/
