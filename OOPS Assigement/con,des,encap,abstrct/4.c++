#include <iostream>
using namespace std;
class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    
    BankAccount(int accNum, double initialBalance) : accountNumber(accNum), balance(initialBalance) {}

    
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposit of $" << amount << " successful." << std::endl;
        } else {
            std::cout << "Invalid deposit amount." << std::endl;
        }
    }

    
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "Withdrawal of $" << amount << " successful." << std::endl;
        } else {
            std::cout << "Insufficient funds or invalid withdrawal amount." << std::endl;
        }
    }

    
    void display() {
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Balance: $" << balance << std::endl;
    }
};

int main() {
    
    BankAccount account(123456, 1000.0);

    
    std::cout << "Initial Account Information:" << std::endl;
    account.display();

    
    account.deposit(500.0);

    
    account.withdraw(200.0);

    // Display updated account information
    std::cout << "\nUpdated Account Information:" << std::endl;
    account.display();

    return 0;
}
