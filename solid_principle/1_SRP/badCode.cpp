#include<iostream>
using namespace std;

class Order {
    public:
    void placeOrder(){
        cout<<"Order placed successfully"<<endl;
    }

    void sendEmailNotification(){
        cout<<"Email sent successfully"<<endl;
    }

};

 int main(){
        Order order;
        order.placeOrder();
        order.sendEmailNotification();
        return 0;
 }