#include <iostream>
using namespace std;


// base class
class Animal {

    public :
    void eat()
    {
        cout << "I can eat !" << endl;
    }
    void sleep ()
    {
        cout << "I can sleep !" << endl;
    }
};

// derived class
class Dog : public Animal {
    
    public : 
    void bark()
    {
        cout << "I can bark! WOW WOW!" << endl;

    }
} ;

int main ()
{
    // object creation
    Dog dog1;

    // calling bace code
    dog1.sleep();
    dog1.eat();

    // calling derived code
    dog1.bark();

    return 0;
}