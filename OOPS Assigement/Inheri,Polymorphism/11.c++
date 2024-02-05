#include <iostream>
#include <cmath>
using namespace std;
const double PI = 3.14159265359;


double calculateArea(double radius) {
    return PI * radius * radius;
}


double calculateArea(double length, double breadth) {
    return length * breadth;
}


double calculateArea(double base, double height, char) {
    return 0.5 * base * height;
}

int main() {
    double radius, length, breadth, base, height;

    
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;
    std::cout << "Area of the circle: " << calculateArea(radius) << std::endl;

    
    std::cout << "Enter the length of the rectangle: ";
    std::cin >> length;
    std::cout << "Enter the breadth of the rectangle: ";
    std::cin >> breadth;
    std::cout << "Area of the rectangle: " << calculateArea(length, breadth) << std::endl;

    
    std::cout << "Enter the base of the triangle: ";
    std::cin >> base;
    std::cout << "Enter the height of the triangle: ";
    std::cin >> height;
    std::cout << "Area of the triangle: " << calculateArea(base, height, 'T') << std::endl;

    return 0;
}
