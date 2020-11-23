#include <iostream>
using namespace std;

// Class of Bank Account Holder
class Holder
{
    public:
    string name, bdate, passnumber, address;
    int pnumber, anumber, balance;

    // Constructor Creating with giving Arguments
    Holder (string h_name, long int h_pnumber, string h_bdate)
    {
        name = h_name;
        pnumber = h_pnumber;
        bdate = h_bdate;

        cout << "Name of Account Holder : " << h_name << endl;
        cout << "Phone Number of Account Holder : " << h_pnumber << endl;
        cout << "Birth Date of Account Holder : " << h_bdate << endl; 
    }
    
    // Second Construnctor with different arguments
    Holder (string h_passnumber, string h_address)
    {
        passnumber = h_passnumber;
        address = h_address;
        
        cout << "Passport Number of Account Holder : " << h_passnumber << endl;
        cout << "Address of Account Holder : " << h_address << endl;
    }
    
    //Third Constructor with different arguments
    Holder (int h_anumber, int h_balance)
    {
        anumber = h_anumber;
        balance = h_balance;

        cout << "Bank Number og Account Holder : " << h_anumber << endl;
        cout << "Balance of Account Holder : " << h_balance << endl;
    }

};
// Adding Void Function For giving Header Info
void info()
    {
        cout << " <-- Information Bank Account Holder --> " << endl;
        cout << "" << endl;

    }

// Main Body of Code
int main ()
{
    // Calling Void Function
    info();

    // Creating Object of Class
    Holder a_info("Barkhayot Juraev", 821077595445, "11/11/1998");
    Holder b_info("A123456789", "New School street 7");
    Holder c_info(123456789, 123456789);

    return 0;


}