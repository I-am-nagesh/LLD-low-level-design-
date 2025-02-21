#include <iostream>
using namespace std;

// Abstract class (Abstraction)
class ATM {
public:
    virtual void withdraw(double amount) = 0; // Pure virtual function
    virtual void deposit(double amount) = 0;
    virtual void checkBalance() = 0;
};

// Base Class (Encapsulation)
class BankAccount : public ATM {
protected:
    string accountHolder;
    int accountNumber;
    double balance;

public:
    // Constructor
    BankAccount(string name, int accNum, double bal) {
        accountHolder = name;
        accountNumber = accNum;
        balance = bal;
    }

    // Depositing money
    void deposit(double amount) override {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << ". New Balance: $" << balance << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Checking balance
    void checkBalance() override {
        cout << "Account Holder: " << accountHolder << ", Balance: $" << balance << endl;
    }
};

// Derived Class (Inheritance)
class SavingsAccount : public BankAccount {
private:
    double interestRate;

public:
    SavingsAccount(string name, int accNum, double bal, double rate)
        : BankAccount(name, accNum, bal), interestRate(rate) {}

    // Withdraw money (Polymorphism)
    void withdraw(double amount) override {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: $" << amount << ". Remaining Balance: $" << balance << endl;
        } else {
            cout << "Insufficient balance or invalid amount!" << endl;
        }
    }

    void addInterest() {
        double interest = balance * (interestRate / 100);
        balance += interest;
        cout << "Interest Added: $" << interest << ". New Balance: $" << balance << endl;
    }
};

// Derived Class (Inheritance)
class CurrentAccount : public BankAccount {
private:
    double overdraftLimit;

public:
    CurrentAccount(string name, int accNum, double bal, double limit)
        : BankAccount(name, accNum, bal), overdraftLimit(limit) {}

    // Withdraw money with overdraft (Polymorphism)
    void withdraw(double amount) override {
        if (amount > 0 && (balance + overdraftLimit) >= amount) {
            balance -= amount;
            cout << "Withdrawn: $" << amount << ". Remaining Balance: $" << balance << endl;
        } else {
            cout << "Overdraft limit exceeded!" << endl;
        }
    }
};

// Main function to simulate ATM operations
int main() {
    SavingsAccount user1("John Doe", 101, 5000, 5);
    CurrentAccount user2("Alice Smith", 102, 3000, 1000);

    cout << "\n🔹 **Savings Account Transactions** 🔹\n";
    user1.checkBalance();
    user1.deposit(2000);
    user1.withdraw(1000);
    user1.addInterest();

    cout << "\n🔹 **Current Account Transactions** 🔹\n";
    user2.checkBalance();
    user2.withdraw(3500); // Uses overdraft
    user2.deposit(500);

    return 0;
}
