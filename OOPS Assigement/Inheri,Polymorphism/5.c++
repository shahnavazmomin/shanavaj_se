#include <iostream>
using namespace std;

class Students {
protected:
    int rollNumber;

public:
    
    void inputRollNumber() {
        std::cout << "Enter roll number: ";
        std::cin >> rollNumber;
    }
};


class Test : public Students {
protected:
    float subject1;
    float subject2;

public:
    
    void inputMarks() {
        std::cout << "Enter marks for Subject 1: ";
        std::cin >> subject1;
        std::cout << "Enter marks for Subject 2: ";
        std::cin >> subject2;
    }
};


class Result : public Test {
private:
    float totalMarks;

public:
    
    void calculateTotalMarks() {
        totalMarks = subject1 + subject2;
    }

    
    void displayResults() {
        std::cout << "\nTest Results:" << std::endl;
        std::cout << "Roll Number: " << rollNumber << std::endl;
        std::cout << "Marks in Subject 1: " << subject1 << std::endl;
        std::cout << "Marks in Subject 2: " << subject2 << std::endl;
        std::cout << "Total Marks: " << totalMarks << std::endl;
    }
};

int main() {
    Result result;

    
    result.inputRollNumber();
    result.inputMarks();

    
    result.calculateTotalMarks();
    result.displayResults();

    return 0;
}
