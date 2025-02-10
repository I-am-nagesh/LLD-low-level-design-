#include <iostream>
using namespace std;

class Payment {
public:
    virtual void processPayment() = 0; // Abstract method
};

class CreditCardPayment : public Payment {
public:
    void processPayment() override {
        cout << "Processing Credit Card Payment" << endl;
    }
};

class PayPalPayment : public Payment {
public:
    void processPayment() override {
        cout << "Processing PayPal Payment" << endl;
    }
};
//New payment methods can be added without modifying existing code.

int main() {
    Payment* payment = new CreditCardPayment();
    payment->processPayment(); 

    delete payment;
    return 0;
}
