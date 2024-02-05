#include <iostream>
#include <string>
using namespace std;
class Grade {
public:
    char calculateGrade(int marks) const {
        if (marks >= 90) {
            return 'A';
        } else if (marks >= 80) {
            return 'B';
        } else if (marks >= 70) {
            return 'C';
        } else if (marks >= 60) {
            return 'D';
        } else {
            return 'F';
        }
    }
};

class Student {
private:
    std::string name;
    std::string studentClass;
    int rollNumber;
    int marks;
    Grade grade; 

public:
    
    Student(const std::string& studentName, const std::string& sClass, int roll, int studentMarks)
        : name(studentName), studentClass(sClass), rollNumber(roll), marks(studentMarks) {}

    
    char calculateGrade() const {
        return grade.calculateGrade(marks);
    }

    
    void displayInfo() const {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Class: " << studentClass << std::endl;
        std::cout << "Roll Number: " << rollNumber << std::endl;
        std::cout << "Marks: " << marks << std::endl;
        std::cout << "Grade: " << calculateGrade() << std::endl;
    }
};

int main() {
    
    Grade grade;

    
    Student student("John Doe", "10th", 101, 85);
    
    
    student.displayInfo();

    return 0;
}
