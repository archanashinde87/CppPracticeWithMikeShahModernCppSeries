/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>

void foo()
{}

int main()
{
    int x = 42;
    float y = 2.3f;
    char a = 'a';
    signed char b = 'b';
    unsigned char c = 'c';
    
    std::cout << "x: " << &x << std::endl;
    std::cout << "y: " << &y << std::endl;
    
    // The address of char is being treated as a nul-terminated string 
    // and is displaying the contents of that address, which is probably undefined,
    std::cout << "a: " << (void*)&a << std::endl;
    std::cout << "b: " << (void*)&b << std::endl;
    std::cout << "c: " << (void*)&c << std::endl;
    
    std::cout << "foo(): " << (void*)&foo << std::endl;
    
    return 0;
}

