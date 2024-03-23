/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string_view>

using namespace std;
class Base
{
protected:
   int m_value{};
   
public:
    Base(int value):m_value{value}
    {}
    
    virtual ~Base()=default;
};

class Derived: public Base
{
private:
std::string m_name{};

public:
    Derived(int value, std::string_view name)
        : Base{value}
        , m_name{name}
        {}
    const std::string& getName() const {return m_name;}
};

int main()
{
    Derived derived{5,"Fruit"};
    Base& rBase = derived;
   // As in this case, base reference is really pointing to derived object, base reference to derived reference conversion(downcasting) is possible using dynamic_cast   
    Derived& rDerived{dynamic_cast<Derived&>(rBase)}; // so downcasting Base reference in to Derived reference
    std::cout << rDerived.getName();
    
    // When dynamic casting fails in case of reference, it throws 'std::bad_cast' exception

    return 0;
}
