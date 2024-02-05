#include <iostream>
#include <string>
using namespace std;
class Car {
private:
    std::string company;
    std::string model;
    int year;

public:
    
    Car(const std::string& comp, const std::string& mdl, int yr) : company(comp), model(mdl), year(yr) {}

    
    std::string getCompany() const {
        return company;
    }

    std::string getModel() const {
        return model;
    }

    int getYear() const {
        return year;
    }

    
    void setCompany(const std::string& comp) {
        company = comp;
    }

    void setModel(const std::string& mdl) {
        model = mdl;
    }

    void setYear(int yr) {
        year = yr;
    }
};

int main() {
    
    Car myCar("Toyota", "Corolla", 2020);

    
    std::cout << "Initial values:" << std::endl;
    std::cout << "Company: " << myCar.getCompany() << std::endl;
    std::cout << "Model: " << myCar.getModel() << std::endl;
    std::cout << "Year: " << myCar.getYear() << std::endl;

    
    myCar.setCompany("Honda");
    myCar.setModel("Civic");
    myCar.setYear(2022);

    
    std::cout << "\nUpdated values:" << std::endl;
    std::cout << "Company: " << myCar.getCompany() << std::endl;
    std::cout << "Model: " << myCar.getModel() << std::endl;
    std::cout << "Year: " << myCar.getYear() << std::endl;

    return 0;
}
