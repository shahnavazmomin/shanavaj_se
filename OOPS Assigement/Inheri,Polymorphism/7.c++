#include <iostream>
using namespace std;

// Base class
class Base {
private:
    int baseData;

public:
    // Constructor
    Base(int data) : baseData(data) {
        std::cout << "Base class constructor called with data: " << baseData << std::endl;
    }

    // Function to display base data
    void displayBaseData() {
        std::cout << "Base data: " << baseData << std::endl;
    }
};

// Derived class
class Derived : public Base {
private:
    int derivedData;

public:
    // Constructor
    Derived(int baseData, int data) : Base(baseData), derivedData(data) {
        std::cout << "Derived class constructor called with data: " << derivedData << std::endl;
    }

    
    void displayDerivedData() {
        std::cout << "Derived data: " << derivedData << std::endl;
    }
};


class FurtherDerived : public Derived {
private:
    int furtherDerivedData;

public:
    // Constructor
    FurtherDerived(int baseData, int derivedData, int data) : Derived(baseData, derivedData), furtherDerivedData(data) {
        std::cout << "FurtherDerived class constructor called with data: " << furtherDerivedData << std::endl;
    }

    
    void displayFurtherDerivedData() {
        std::cout << "FurtherDerived data: " << furtherDerivedData << std::endl;
    }
};

int main() {
    FurtherDerived obj(10, 20, 30);
    std::cout << std::endl;

    obj.displayBaseData();
    obj.displayDerivedData();
    obj.displayFurtherDerivedData();

    return 0;
}
