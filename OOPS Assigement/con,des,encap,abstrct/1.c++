#include <iostream>
using namespace std;
inline int multiply(int x, int y) {
    return x * y;
}

inline int cubic(int x) {
    return x * x * x;
}

int main() {
    int num;

    std::cout << "Enter a number: ";
    std::cin >> num;

    std::cout << "Multiplication values of " << num << " are: " << std::endl;
    for (int i = 1; i <= 10; ++i) {
        std::cout << num << " * " << i << " = " << multiply(num, i) << std::endl;
    }

    std::cout << "Cubic value of " << num << " is: " << cubic(num) << std::endl;

    return 0;
}
