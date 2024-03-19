/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <chrono>
#include <algorithm>

using namespace std;
using namespace std::chrono;
void passByValue(std::vector<int> arg)
{
    arg[0] = 9999;
}
void passByReference(std::vector<int>& alias)
{
    alias[0] = 9999;
}

int main()
{
    vector<int> vec(100000000);
    
    fill(begin(vec), end(vec), 1);
    
    // Get starting timepoint
    auto start = high_resolution_clock::now();
    
    passByValue(vec);
    
    // Get ending timepoint
    auto stop = high_resolution_clock::now();
    
    // Get duration. Substart timepoints to 
    // get duration. To cast it to proper unit
    // use duration cast method
    auto duration = duration_cast<nanoseconds>(stop - start);
 
    cout << "Time taken by  Pass by Value function: "
         << duration.count() << " nanoseconds" << endl;
         
         // Get starting timepoint
    auto start1 = high_resolution_clock::now();
       
    passByReference(vec);
    
      // Get ending timepoint
    auto stop1 = high_resolution_clock::now();
    
    // Get duration. Substart timepoints to 
    // get duration. To cast it to proper unit
    // use duration cast method
    auto duration1 = duration_cast<nanoseconds>(stop1 - start1);
 
    cout << "Time taken by Pass by Reference function: "
         << duration1.count() << " nanoseconds" << endl;

    return 0;
}

/*
result for time taken by passByValue(vec) call - due to copy passed from arg to parameters it's expensive 
and takes that much time to just pass vector and assign one value to one of the elememnt of vector
Time taken by  Pass by Value function: 202955176 nanoseconds

result for time taken by passByReference(vec) call - see how efficient pass by reference as it's just 
Time taken by Pass by Reference function: 176 nanoseconds
*/
