#include <iostream>
using namespace std;

int main()
{
    int bill;
    cout<<"Enter bill amount: ";
    cin>>bill;
    float discount;
    if(bill<100)
    {
        cout<<"No discount applicable!"<<endl;
        cout<<"The bill is "<<bill;
    }
    else if(bill>=100 && bill<500)
    {
        cout<<"Congrats! A discount of 20% is applicable!"<<endl;
        discount = 20%100;
        bill = bill - bill*discount;
        cout<<"Final bill is "<<bill<<endl;
    }
    else if(bill>=500)
    {
        cout<<"Congrats! A discount of 30% is applicable!"<<endl;
        discount = 30%100;
        bill = bill-bill*discount;
        cout<<"Final bill is "<<bill<<endl;
    }
}