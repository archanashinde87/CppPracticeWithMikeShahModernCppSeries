/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

int main()
{
    //continue keyword
    for(int x=0; x<10;x++)
    {
        continue;
        for(int i=0;i<10;i++)
        {
            std::cout << "start of loop" << std::endl;
            std::cout << "i is " << i << std::endl;
        }
        
        std::cout << "x is " << x << std::endl;
    }
    
    std::cout << "--------------------------------" << std::endl;
    
    //break keyword
    for(int x=0;x<10;x++)
    {
        for(int i=0;i<10;i++)
        {
            break;
            std::cout << "start of loop" << std::endl;
            std::cout << "i is " << i << std::endl;
        }
        
        std::cout << "x is " << x << std::endl;
    }

   return 0;
}
