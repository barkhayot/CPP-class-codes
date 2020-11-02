#include <iostream>
using namespace std;

class SMS {
    public: 
        string message1, message2, phone1, phone2;


};

SMS createMessage(){
    SMS user;

    user.phone1 = "010332767";
    user.phone2 = "010123322";
    user.message1 = "How is your C++ Class ?";


    cout << "Sender : " << user.phone1 << " Reciver : " << user.phone2 << " Text : " << user.message1 << endl;

    return user;
}

SMS createMessage2(){
    SMS user;

    user.phone1 = "010332767";
    user.phone2 = "010123322";
    user.message2 = "It's going really interesting ";


    cout << "Reciver : " << user.phone2 << " Sender : " << user.phone1 << " Text : " << user.message2 << endl;
    
    return user;
}

int main() {
    SMS user1;

    cout << "Message #1 " << endl;
    user1 = createMessage();

    cout << "Message #2 " << endl;
    user1 = createMessage2();

    return 0;
    
}