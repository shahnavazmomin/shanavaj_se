#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    
    Person(string n, int a) : name(n), age(a) {}

    
    void readData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    
    void writeData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};


class Student : public Person {
protected:
    float percentage;

public:
    
    Student(string n, int a, float p) : Person(n, a), percentage(p) {}

    
    void readData() {
        Person::readData();
        cout << "Enter percentage: ";
        cin >> percentage;
    }

    
    void writeData() {
        Person::writeData();
        cout << "Percentage: " << percentage << endl;
    }
};


class Teacher : public Person {
protected:
    float salary;

public:
    
    Teacher(string n, int a, float s) : Person(n, a), salary(s) {}

    
    void readData() {
        Person::readData();
        cout << "Enter salary: ";
        cin >> salary;
    }

    
    void writeData() {
        Person::writeData();
        cout << "Salary: " << salary << endl;
    }
};

int main() {

    cout << "Enter Student Details:" << endl;
    Student student("John", 20, 85.5);
    student.readData();

    
    cout << "\nEnter Teacher Details:" << endl;
    Teacher teacher("Mr. Smith", 35, 50000);
    teacher.readData();

    
    cout << "\nStudent Details:" << endl;
    student.writeData();

    cout << "\nTeacher Details:" << endl;
    teacher.writeData();

    return 0;
};
