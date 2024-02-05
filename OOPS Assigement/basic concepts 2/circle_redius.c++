#include <iostream>
using namespace std;

class Circle {
private:
    double radius;

public:
    // Constructor
    Circle(double r) {
        radius = r;
    }

    // Function to calculate the area of the circle
    double calculateArea() {
        return 3.14 * radius * radius;
    }

    // Function to calculate the circumference of the circle
    double calculateCircumference() {
        return 2 * 3.14 * radius;
    }
};

int main() {
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    Circle circle(radius);

    cout << "Area of the circle: " << circle.calculateArea() << endl;
    cout << "Circumference of the circle: " << circle.calculateCircumference() << endl;

    return 0;
}
