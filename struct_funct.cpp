#include <iostream>
using namespace std;


struct Person{
    char name [50];
    int age;
    float salary;

};

Person getData(Person);
void displayData(Person);

int main()
{
    Person p;

    p = getData(p);
    displayData(p);

    return 0;

}

Person getData(Person p) {

    cout << "Enter the name : ";
    cin.get(p.name, 50);

    cout << "Enter the age: " ;
    cin >> p.age ;

    cout << "Enter the salary";
    cin >> p.salary;

    return p;

}

void displayData(Person p)
{
    cout << "\nDisplay INFO : " <<  endl;
    cout << "Name : " << p.name << endl;
    cout << "Age : " << p.age << endl;
    cout << "Salary : " << p.salary << endl;
    
}

