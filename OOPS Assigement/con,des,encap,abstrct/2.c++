#include <iostream>
using namespace std;
class Calculator {
private:
    int num1;
    int num2;

public:
    
    Calculator(int a, int b) : num1(a), num2(b) {}

    
    int add() {
        return num1 + num2;
    }

    
    int subtract() {
        return num1 - num2;
    }

    
    float divide() {
        if (num2 != 0)
            return static_cast<float>(num1) / num2;
        else {
            std::cout << "Error: Division by zero" << std::endl;
            return 0;
        }
    }

    
    int multiply() {
        return num1 * num2;
    }
};

int main() {
    int num1, num2;
    
    
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;
    
    
    Calculator calc(num1, num2);
    
    
    std::cout << "Addition: " << calc.add() << std::endl;
    std::cout << "Subtraction: " << calc.subtract() << std::endl;
    std::cout << "Division: " << calc.divide() << std::endl;
    std::cout << "Multiplication: " << calc.multiply() << std::endl;
    
    return 0;
}
