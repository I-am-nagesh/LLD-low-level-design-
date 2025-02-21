#include <iostream>
using namespace std;

class Payment {
public:
    virtual void processPayment() = 0; // Abstract method
    virtual ~Payment() {} // Virtual destructor for proper cleanup
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

// New BitcoinPayment class
// class BitcoinPayment : public Payment {
//     public:
//         void processPayment() override {
//             cout << "Processing Bitcoin Payment" << endl;
//         }
//     };

int main() {
    Payment* payment = new CreditCardPayment();
    payment->processPayment(); 

    delete payment;

    // Testing BitcoinPayment
    // payment = new BitcoinPayment();
    // payment->processPayment();
    // delete payment;
    return 0;
}
