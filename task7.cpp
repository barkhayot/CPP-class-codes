#include <iostream>
using namespace std;


class Date {
    private:
        int year;
        int month;
        int day;
    public:
        Date();
        Date(int y, int m, int d){
            year = y;
            month = m;
            day = d;
        }
        bool isLeapYear(int y){
            if (y % 4 == 0 ){
                return true;
            }
            else {
                return false;
            } 
        }
        
        void print() {
            cout << "Date is : " << year << month << day << endl;
            
            if (bool() == true ){
                cout << year << " is leap" << endl;
            }
            else {
                cout << year << " is not leap" << endl;
            }
            
        }
        
        void nextMonth(){
            ++ month;
            cout << "Next Month is : " << month << endl;

        }
        

};

int main (){
    Date date1(2019, 11, 2);

    date1.print();
    date1.nextMonth();
    return 0;


};