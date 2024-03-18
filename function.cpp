/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

// function declaration - forward declaration - a,b are parameters
int add(int a, int b);
auto add(float a, float b) -> float;

// function definition and declaration
void print()
{
    std::cout << "hello functions" << std::endl;
}
int main()
{
    std::cout << add(1,2) << std::endl; // 1,2 are arguments
    std::cout << add(1.2f,2.3f) << std::endl; // 1.2f,2.3f are arguments
    print();
    return 0;
}

// function definition
int add(int a, int b)
{
    std::cout << "int add(int, int)\n";
    return a+b;
}

// function definition
float add(float a, float b)
{
    std::cout << "float add(float, float)\n";
    return a+b;
}


