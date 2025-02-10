#include <iostream>
using namespace std;

class Order {
public:
    void placeOrder() {
        cout << "Order Placed Successfully" << endl;
    }
};

class EmailNotification {
public:
    void sendEmail() {
        cout << "Email sent: Your order is confirmed!" << endl;
    }
};

int main() {
    Order order;
    EmailNotification email;
    order.placeOrder();
    email.sendEmail();
    return 0;
}
