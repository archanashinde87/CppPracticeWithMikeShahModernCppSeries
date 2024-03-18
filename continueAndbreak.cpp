/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

int main()
{
    //continue keyword
    for(int i=0;i<10;i++)
    {
        std::cout << "start of loop" << std::endl;
        continue;
        std::cout << "i is " << i << std::endl;
    }
    
    std::cout << "--------------------------------" << std::endl;
    
    //break keyword
    for(int i=0;i<10;i++)
    {
        std::cout << "start of loop" << std::endl;
        break;
        std::cout << "i is " << i << std::endl;
    }

   return 0;
}
