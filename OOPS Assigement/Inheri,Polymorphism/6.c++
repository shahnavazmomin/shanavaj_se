#include <iostream>
using namespace std;
// Base class
class Base {
private:
    int privateData;    // private member

protected:
    int protectedData;  // protected member

public:
    int publicData;     // public member

    // Constructor
    Base() : privateData(1), protectedData(2), publicData(3) {}

    // Function to display data
    void displayData() {
        std::cout << "Private data: " << privateData << std::endl;
        std::cout << "Protected data: " << protectedData << std::endl;
        std::cout << "Public data: " << publicData << std::endl;
    }
};

// Derived class
class Derived : public Base {
public:
    void accessBaseMembers() {
        // Accessing members of the base class
        // privateData is not accessible here
        std::cout << "Protected data (from derived class): " << protectedData << std::endl;
        std::cout << "Public data (from derived class): " << publicData << std::endl;
    }
};

int main() {
    Derived derivedObject;
    derivedObject.accessBaseMembers();
    derivedObject.displayData(); // Accessing public members of the base class

    return 0;
}
