/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>

int main()
{
    int numOfStudents = 0;
    std::cout << "How many students in our class?\n";
    std::cin >> numOfStudents;
    
    int* studentids = new int[numOfStudents];
    
    for(int i=0; i<numOfStudents; i++)
    {
        studentids[i] = i;
    }
    
    delete[] studentids;
    return 0;
}

