#include <iostream>
#include <string>
using namespace std;
class Employee {
private:
    std::string name;
    int employeeID;
    double salary;

public:
    
    Employee(const std::string& empName, int empID, double initialSalary) 
        : name(empName), employeeID(empID), salary(initialSalary) {}

    
    void setSalary(double performanceFactor) {
        salary *= performanceFactor;
    }

    
    std::string getName() const {
        return name;
    }

    
    int getEmployeeID() const {
        return employeeID;
    }

    
    double getSalary() const {
        return salary;
    }
};

int main() {
    
    Employee emp("John Doe", 1001, 50000.0);

    
    std::cout << "Initial Employee Information:" << std::endl;
    std::cout << "Name: " << emp.getName() << std::endl;
    std::cout << "Employee ID: " << emp.getEmployeeID() << std::endl;
    std::cout << "Salary: $" << emp.getSalary() << std::endl;

    
    emp.setSalary(1.10);

    
    std::cout << "\nUpdated Employee Information:" << std::endl;
    std::cout << "Name: " << emp.getName() << std::endl;
    std::cout << "Employee ID: " << emp.getEmployeeID() << std::endl;
    std::cout << "Salary: $" << emp.getSalary() << std::endl;

    return 0;
}
