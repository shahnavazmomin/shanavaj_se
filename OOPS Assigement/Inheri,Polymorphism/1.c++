#include <iostream>
#include <string>
using namespace std;
class Cricketer {
protected:
    std::string name;
    int age;

public:
    
    void inputCricketerData() {
        std::cout << "Enter Cricketer's name: ";
        std::cin >> name;
        std::cout << "Enter Cricketer's age: ";
        std::cin >> age;
    }

    
    void displayCricketerData() const {
        std::cout << "Cricketer's name: " << name << std::endl;
        std::cout << "Cricketer's age: " << age << std::endl;
    }
};

class Batsman : public Cricketer {
private:
    int totalRuns;
    double averageRuns;
    int bestPerformance;

public:
    
    void inputBatsmanData() {
        inputCricketerData(); 
        std::cout << "Enter Batsman's total runs: ";
        std::cin >> totalRuns;
        std::cout << "Enter Batsman's best performance: ";
        std::cin >> bestPerformance;
        calculateAverageRuns();
    }


    void calculateAverageRuns() {
        
        averageRuns = static_cast<double>(totalRuns) / 10; 
    }

    
    void displayBatsmanData() const {
        displayCricketerData(); 
        std::cout << "Batsman's total runs: " << totalRuns << std::endl;
        std::cout << "Batsman's average runs: " << averageRuns << std::endl;
        std::cout << "Batsman's best performance: " << bestPerformance << std::endl;
    }
};

int main() {
    Batsman batsman;

    
    std::cout << "Enter Batsman's data:" << std::endl;
    batsman.inputBatsmanData();

    
    std::cout << "\nBatsman's Information:" << std::endl;
    batsman.displayBatsmanData();

    return 0;
}
