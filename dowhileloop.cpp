/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

int main()
{
    int countdown = 3;
    do{
        std::cout << countdown << std::endl;
        countdown--;
    }while(countdown > 0);
    
   return 0;
}
