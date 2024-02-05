#include <iostream>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
    
    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    
    void setDate(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    
    int getDay() const {
        return day;
    }

    
    int getMonth() const {
        return month;
    }

    
    int getYear() const {
        return year;
    }

    
    bool isValid() const {
        if (year < 0)
            return false;

        if (month < 1 || month > 12)
            return false;

        if (day < 1 || day > 31)
            return false;

        if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
            return false;

        if (month == 2) {
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                if (day > 29)
                    return false;
            } else {
                if (day > 28)
                    return false;
            }
        }
        return true;
    }
};

int main() {
    int day, month, year;

    
    std::cout << "Enter date (day month year): ";
    std::cin >> day >> month >> year;

    // 
    Date date(day, month, year);

    
    if (date.isValid()) {
        std::cout << "The entered date is valid." << std::endl;
    } else {
        std::cout << "The entered date is not valid." << std::endl;
    }

    return 0;
}
