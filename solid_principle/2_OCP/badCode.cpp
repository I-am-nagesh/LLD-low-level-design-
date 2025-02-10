#include <iostream>
using namespace std;

class Payment {
public:
    void processPayment(string type) {
        if (type == "CreditCard") {
            cout << "Processing Credit Card Payment" << endl;
        } else if (type == "PayPal") {
            cout << "Processing PayPal Payment" << endl;
        }
        // Later, we may add "UPI", "Bitcoin", etc.
    }
};

int main() {
    Payment payment;
    payment.processPayment("CreditCard");
    return 0;
}
