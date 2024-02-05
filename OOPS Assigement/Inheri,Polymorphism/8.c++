#include <iostream>
using namespace std;

int mathOperation(int a, int b) {
    return a + b;
}


float mathOperation(float a, float b) {
    return a + b;
}


int mathOperation(int a, int b, int c) {
    return a - b - c;
}


float mathOperation(float a, float b, float c) {
    return a - b - c;
}


int mathOperation(int a, int b, int c, int d) {
    return a * b * c * d;
}


float mathOperation(float a, float b, float c, float d) {
    return a * b * c * d;
}


float mathOperation(float a, int b) {
    if (b != 0)
        return a / b;
    else {
        std::cerr << "Error! Division by zero." << std::endl;
        return 0.0;
    }
}


float mathOperation(int a, float b) {
    if (b != 0)
        return a / b;
    else {
        std::cerr << "Error! Division by zero." << std::endl;
        return 0.0;
    }
}

int main() {
    int intResult1 = mathOperation(10, 5);
    float floatResult1 = mathOperation(10.5f, 5.5f);

    int intResult2 = mathOperation(20, 5, 3);
    float floatResult2 = mathOperation(20.5f, 5.5f, 3.5f);

    int intResult3 = mathOperation(2, 3, 4, 5);
    float floatResult3 = mathOperation(2.5f, 3.5f, 4.5f, 5.5f);

    float floatResult4 = mathOperation(10.0f, 2);
    float floatResult5 = mathOperation(10, 2.0f);

    
    std::cout << "Addition result (int): " << intResult1 << std::endl;
    std::cout << "Addition result (float): " << floatResult1 << std::endl;
    std::cout << "Subtraction result (int): " << intResult2 << std::endl;
    std::cout << "Subtraction result (float): " << floatResult2 << std::endl;
    std::cout << "Multiplication result (int): " << intResult3 << std::endl;
    std::cout << "Multiplication result (float): " << floatResult3 << std::endl;
    std::cout << "Division result (float/int): " << floatResult4 << std::endl;
    std::cout << "Division result (int/float): " << floatResult5 << std::endl;

    return 0;
}
