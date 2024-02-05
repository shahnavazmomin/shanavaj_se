#include <iostream>
using namespace std;

class Calculator {
public:
    float add(float x, float y) {
        return x + y;
    }

    float subtract(float x, float y) {
        return x - y;
    }

    float multiply(float x, float y) {
        return x * y;
    }

    float divide(float x, float y) {
        if (y == 0) {
            cout << "Cannot divide by zero" << endl;
            return 0;
        } else {
            return x / y;
        }
    }
};

class BankAccount {
private:
    string depositor_name;
    string account_number;
    string account_type;
    float balance;

public:
    // Constructor to initialize the account
    BankAccount(string name, string acc_num, string acc_type) {
        depositor_name = name;
        account_number = acc_num;
        account_type = acc_type;
        balance = 0.0;
    }

    // Function to deposit an amount
    void deposit(float amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful. New balance: " << balance << endl;
        } else {
            cout << "Invalid deposit amount" << endl;
        }
    }

    // Function to withdraw an amount after checking balance
    void withdraw(float amount) {
        if (amount > 0) {
            if (balance >= amount) {
                balance -= amount;
                cout << "Withdrawal successful. New balance: " << balance << endl;
            } else {
                cout << "Insufficient balance" << endl;
            }
        } else {
            cout << "Invalid withdrawal amount" << endl;
        }
    }

    // Function to display name and balance
    void display() {
        cout << "Name: " << depositor_name << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    // Testing the Calculator class
    Calculator calc;
    cout << "Addition: " << calc.add(5, 3) << endl;
    cout << "Subtraction: " << calc.subtract(5, 3) << endl;
    cout << "Multiplication: " << calc.multiply(5, 3) << endl;
    cout << "Division: " << calc.divide(5, 3) << endl;

    // Testing the BankAccount class
    BankAccount acc("John Doe", "123456", "Savings");
    acc.deposit(1000);
    acc.withdraw(500);
    acc.display();

     return 0;
    
};
