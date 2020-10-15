#include <iostream>
using namespace std;

int main()
{
    double f_temp;
    double c_temp;
    cout << "Enter the F Temprature :";
    cin >> f_temp; //taking the input 

    c_temp = (5.0/9.0)*(f_temp-32);
    cout << "F Temprature is " << f_temp << "and C Temprature is " << c_temp << endl;
    return 0;
}