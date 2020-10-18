// Program to print positive number entered by the user
// If the user enters a negative number, it is skipped

#include <iostream>
using namespace std;

int main() {

    int a, b, c, largest;
    
    cout << "enter three numbers : ";
    cin >> a >> b >> c;

    if (a>b && a>c){
        largest = a;

    }
    else if(b>a && b>c){
        largest = b;
    }
    else {
        largest = c;

    }

    cout << "The largest input is :" << largest << endl;
    return 0;
    
}