#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    std::string name;
    int rollNumber;

public:
    
    void inputStudent() {
        std::cout << "Enter student name: ";
        std::cin >> name;
        std::cout << "Enter student roll number: ";
        std::cin >> rollNumber;
    }
};


class Academic {
protected:
    float marks[5]; // Assuming 5 subjects

public:
    
    void inputAcademic() {
        std::cout << "Enter marks for 5 subjects:" << std::endl;
        for (int i = 0; i < 5; ++i) {
            std::cout << "Subject " << i + 1 << ": ";
            std::cin >> marks[i];
        }
    }
};


class MarkSheet : public Student, public Academic {
public:
    
    void displayMarkSheet() {
        std::cout << "\nStudent Mark Sheet:" << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Roll Number: " << rollNumber << std::endl;
        std::cout << "Marks:" << std::endl;
        for (int i = 0; i < 5; ++i) {
            std::cout << "Subject " << i + 1 << ": " << marks[i] << std::endl;
        }
    }
};

int main() {
    MarkSheet studentMarkSheet;

    
    studentMarkSheet.inputStudent();
    studentMarkSheet.inputAcademic();

    
    studentMarkSheet.displayMarkSheet();

    return 0;
}
