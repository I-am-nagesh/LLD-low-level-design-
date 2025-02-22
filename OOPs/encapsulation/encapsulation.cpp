#include<iostream>
using namespace std;

class Customer{
    string name;
    int account_number, balance;
    int age;

    public:
    Customer (string n, int a, int b, int c){
        name = n;
        account_number = a;
        balance = b;
        age = c;
    }

    void deposit(int amount){
        if(amount > 0){
            balance += amount;
            cout << "Amount deposited successfully" << endl;
        }
        else{
            cout << "Invalid amount" << endl;
        }
    }
    void withdraw(int amount){
        if(amount > 0 && amount <= balance){
            balance -= amount;
            cout << "Amount withdrawn successfully" << endl;
        }
        else{
            cout << "Invalid amount" << endl;
        }
    }

    void updateAge(int age){
        if(age > 0){
            this->age = age;
            cout << "Age updated successfully" << endl;
        }
        else{
            cout << "Invalid age" << endl;
        }
    }

    void display(){
        cout << "Name: " << name << endl;
        cout << "Account Number: " << account_number << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main(){
    Customer A1("rohit", 1, 1000, 25);
    Customer A2("mohit", 2, 2000, 30);
    Customer A3("sohit", 3, 3000, 35);
    A1.deposit(-100);
    A1.display();
}