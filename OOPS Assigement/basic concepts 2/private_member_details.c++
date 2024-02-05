#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;
    string country;

public:
    // Function to set the values of name, age, and country
    void setValues(string n, int a, string c) {
        name = n;
        age = a;
        country = c;
    }

    // Function to get the name
    string getName() {
        return name;
    }

    // Function to get the age
    int getAge() {
        return age;
    }

    // Function to get the country
    string getCountry() {
        return country;
    }
};

int main() {
    Person person1;

    // Setting the values of name, age, and country
    person1.setValues("John", 30, "USA");

    // Getting and displaying the values
    cout << "Name: " << person1.getName() << endl;
    cout << "Age: " << person1.getAge() << endl;
    cout << "Country: " << person1.getCountry() << endl;

    return 0;
}
