#include <iostream>

using namespace std;

class A
{
    public:
    // constructor
    A()
    {   
        cout << "constructor called";
    }
    // deconstructor
    ~A()
    {
        cout << "Deconstructor called";
    }
};

int main ()
{
    A obj1; // constructor called
    int x = 1;
    if (x)
    {
        A obj2; // constructor called
    }
}