#include <iostream>
#include <string>
#include <vector>

class Employee {
public:
    Employee(const std::string& name, int id) : name(name), id(id) {}

    void displayEmployeeDetails() {
        std::cout << "Employee ID: " << id << ", Name: " << name << std::endl;
    }

    void saveEmployeeDetails() {
        // Code to save employee details to a database
        std::cout << "Saving employee details to the database." << std::endl;
    }

    void calculateSalary() {
        // Code to calculate salary
        std::cout << "Calculating salary for employee." << std::endl;
    }

private:
    std::string name;
    int id;
};

int main() {
    Employee emp("John Doe", 123);
    emp.displayEmployeeDetails();
    emp.saveEmployeeDetails();
    emp.calculateSalary();
    return 0;
}