#include <iostream>
using namespace std;

class Shape {
public:
    
    virtual double calculateArea() = 0;
};


class Rectangle : public Shape {
protected:
    double length;
    double width;

public:
    
    Rectangle(double l, double w) : length(l), width(w) {}

    
    double calculateArea() override {
        return length * width;
    }
};

int main() {
    double length, width;

    std::cout << "Enter length of rectangle: ";
    std::cin >> length;
    std::cout << "Enter width of rectangle: ";
    std::cin >> width;


    Rectangle rectangle(length, width);


    std::cout << "Area of rectangle: " << rectangle.calculateArea() << std::endl;

    return 0;
}
