#include <iostream>
using namespace std;

template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1, num2;
    double double1, double2;

    
    std::cout << "Enter two integers separated by space: ";
    std::cin >> num1 >> num2;

    
    std::cout << "Enter two double values separated by space: ";
    std::cin >> double1 >> double2;

    
    std::cout << "Before swapping (integers): " << num1 << " " << num2 << std::endl;
    std::cout << "Before swapping (doubles): " << double1 << " " << double2 << std::endl;

    
    swapValues(num1, num2);

    
    swapValues(double1, double2);

    
    std::cout << "After swapping (integers): " << num1 << " " << num2 << std::endl;
    std::cout << "After swapping (doubles): " << double1 << " " << double2 << std::endl;

    return 0;
}
