#include <iostream>
#include <cstring>
using namespace std;
class MyString {
private:
    char *str;

public:
    
    MyString(const char *s = "") {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    
    ~MyString() {
        delete[] str;
    }

    
    MyString operator+(const MyString &s) {
        char *temp = new char[strlen(str) + strlen(s.str) + 1];
        strcpy(temp, str);
        strcat(temp, s.str);
        MyString result(temp);
        delete[] temp;
        return result;
    }

    
    void display() const {
        std::cout << str << std::endl;
    }
};

int main() {
    
    MyString s1("Hello, ");
    MyString s2("mark!");

    
    MyString s3 = s1 + s2;

    
    std::cout << "Concatenated string: ";
    s3.display();

    return 0;
}
