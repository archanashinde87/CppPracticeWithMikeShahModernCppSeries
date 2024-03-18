/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <numeric>
#include <iterator>

int main()
{
    int ids[100]; 
    std::iota(std::begin(ids), std::end(ids), 100); // std::iota - It can be used to generate a sequence of consecutive numbers. 
    //ids[10000000] = 9; // error segmentation fault
    for(int i=0; i<100; i++)
    {
        std::cout << ids[i] << std::endl;
    }
    return 0;
}
