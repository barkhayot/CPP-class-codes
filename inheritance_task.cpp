#include <iostream>
#include <string>

using namespace std;


class Person
{
   /// protected:
    public :
    int age;
    string profession;

    void eat()
    {
        cout << "Can eat !" << endl;
    }
    void run()
    {
        cout << "Can run !" << endl;
    }

};

class Professor : public Person
{
    public:
    void setAgeProf (int ag, string pr)
    {
        age = ag;
        profession = pr;
    }
    void info(int age, string profession)
    {
        cout << "Profession is  " << profession << endl;
        cout << "Age is " << age << endl;
    }
    void teach()
    {
        cout << "Can teach !" << endl;
    }
};

class Businessman: public Person 
{
    public:
    void setAgeProf (int ag, string pr)
    {
        age = ag;
        profession = pr;
    }
    void info(int age, string profession)
    {
        cout << "Profession is " << profession << endl;
        cout << "Age is " << age << endl;
    }
    void ruBis()
    {
        cout << "I can run Business !" << endl;
    }
};

class TennisPlayer: public Person
{
    public:
    void setAgeProf (int ag, string pr)
    {
        age = ag;
        profession = pr;
    }
    void info(int age, string profession)
    {
        cout << "Profession is " << profession << endl;
        cout << "Age is " << endl;
    }
    void playTennis()
    {
        cout << "I can Play Tennis !" << endl;
    }
};

int main()
{
    // Head Cpation 
    cout << "<-- Information about Derived Classes from Person Base Class -->" << endl;

    
    // Proffesor Object
    Professor professor;
    
    professor.info(32, "Proffessor");
    professor.teach();
    professor.eat();
    professor.run();


    // Businessman Object
    Businessman businessman;

    businessman.info(21, "Businessman");
    businessman.ruBis();
    businessman.eat();
    businessman.run();

    // Tennis Player Object
    TennisPlayer tennisplayer;
    
    tennisplayer.info(32,"343434");
    tennisplayer.playTennis();
    tennisplayer.eat();
    tennisplayer.run();

}