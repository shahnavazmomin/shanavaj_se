#include <iostream>
using namespace std;
class Number {
private:
    int num;

public:
    
    Number(int n) : num(n) {}

    
    friend void swapNumbers(Number &, Number &);
};


void swapNumbers(Number &a, Number &b) {
    a.num = a.num + b.num;
    b.num = a.num - b.num;
    a.num = a.num - b.num;
}

int main() {
    int num1, num2;

    
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;

    
    Number number1(num1);
    Number number2(num2);

    
    std::cout << "Before swapping:" << std::endl;
    std::cout << "Number 1: " ;
};
