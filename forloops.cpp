/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <array>

int main()
{
   int arr[]{1,2,3};
   std::array<int, 3> arr2{4,5,6};
   
   // simple for loop with C-style array
   for(int i=0; i<3; i++)
   {
       std::cout << arr[i] << std::endl;
   }
   std::cout << "---------------------------------\n";
   
    // Simple for loop with STL array container
   for(int i=0; i<arr2.size(); i++)
   {
       std::cout << arr2[i] << std::endl;
   }
   std::cout << "---------------------------------\n";
   
   // Range based for loop with C-style array
   for(int elem : arr)
   {
       std::cout << elem << std::endl;
   }
   std::cout << "---------------------------------\n";
   
    // Range based for loop with STL array container
   for(int  elem2 : arr2)
   {
       std::cout << elem2 << std::endl;
   }
   std::cout << "---------------------------------\n";
   
    // Range based for loop using auto keyword for automatic type deduction from it's initializer
   for(auto elem2 : arr2)
   {
       std::cout << elem2 << std::endl;
   }
   std::cout << "---------------------------------\n";

    // Range based for loop using auto keyword & reference(&)for automatic type deduction from it's initializer and reference
    // so that we do not copy element from data structure and instead make reference to element
   for(auto& elem2 : arr2)
   {
       std::cout << elem2 << std::endl;
   }
   std::cout << "---------------------------------\n";
   return 0;
}
