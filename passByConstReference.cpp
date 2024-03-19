/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>

void passByValue(std::vector<int> arg)
{
    arg[0] = 9999;
}
void passByReference(const std::vector<int>& alias) // pass by const reference
{
    // alias[0] = 9999; // it won't allow to modify data and it becomes read only data as we passed arg by const reference
    std::cout << alias[0] << std::endl;
}

int main()
{
    std::vector<int> vec(100000);
    
    fill(std::begin(vec), std::end(vec), 1);
    
    passByValue(vec);
    
    passByReference(vec);
    
    return 0;
}

