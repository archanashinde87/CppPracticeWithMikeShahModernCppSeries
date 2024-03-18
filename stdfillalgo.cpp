/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <array>
#include <vector>
#include <algorithm>

int main()
{
    std::array<int, 3> myArray;
    std::fill(myArray.begin(), myArray.end(), 1024);
    // Range based for loop
    for(int element : myArray)
    {
        std::cout << element << std::endl;
    }
    
    std::cout  << "--------------------"<< std::endl;
    
    std::vector<int> myVector{1,2,3,4,5,6,7};
    std::fill(myVector.begin(), myVector.end(), 999);
    // Range based for loop
    for(auto& elem : myVector)
    {
        std::cout << elem << std::endl;
    }
   return 0;
}
