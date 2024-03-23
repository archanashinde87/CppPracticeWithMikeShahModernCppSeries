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
    virtual ~Base()
    {}
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

Base* getObject(bool returnDerived)
{
    if(returnDerived)
        return new Derived{1,"Apple"};
    else
        return new Base{2};
}

int main()
{
    Base* pBase{getObject(true)};
   // pBase->getName(); // can not call derived member function on base pointer
   
    Derived* pDerived{dynamic_cast<Derived*>(pBase)}; // so downcasting Base pointer in to Derived pointer
    std::cout << pDerived->getName();
    
    delete pBase;
    return 0;
}
