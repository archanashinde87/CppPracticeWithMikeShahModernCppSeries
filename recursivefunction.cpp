/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>

int countdown(int n)
{
    // base case
    if(n==0)
    {
        std::cout << "0...blast off!" << std::endl;
        return 0;
    }
    
    // recursive case
    std::cout << n << std::endl;
    return countdown(n-1);
}

int main()
{
    countdown(5);
    //countdown(500000); // segmentation fault - stack overflow as it has around 1MB memory allocated
    return 0;
}

