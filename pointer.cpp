/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>

int main()
{
    int x = 7;
    int* px = &x; // pointer stores address of another variable
    int* px2 = &x;
    
    x = 9;
    
    std::cout << "x stores " << x << std::endl;
    std::cout << "x address: " << &x << std::endl;
    std::cout << "px stores " << px << std::endl;
    std::cout << "px dereferences: " << *px << std::endl;
    std::cout << "px2 stores " << px2 << std::endl;
    std::cout << "px2 dereferences: " << *px2 << std::endl;
    
    return 0;
}

