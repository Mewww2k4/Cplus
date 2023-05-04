#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string name;
    int account_number;
    string account_type;
    double balance;

public:
    static double interest_rate;

    // Default constructor
    BankAccount() {
        name = "";
        account_number = 0;
        account_type = "";
        balance = 0.0;
    }

    // Parameterized constructor
    BankAccount(string n, int acc_no, string acc_type, double b) {
        name = n;
        account_number = acc_no;
        account_type = acc_type;
        balance = b;
    }

    // Copy constructor
    BankAccount(const BankAccount& other) {
        name = other.name;
        account_number = other.account_number;
        account_type = other.account_type;
        balance = other.balance;
    }

    // Function to deposit amount
    void deposit(double amount) {
        balance += amount;
        cout << "Deposit of " << amount << " successful. New balance is " << balance << endl;
    }

    // Function to withdraw amount after checking for minimum balance
    void withdraw(double amount) {
        if (balance - amount >= 1000.0) {
            balance -= amount;
            cout << "Withdrawal of " << amount << " successful. New balance is " << balance << endl;
        }
        else {
            cout << "Insufficient balance" << endl;
        }
    }

    // Function to display all the details of an account holder
    void display_details() {
        cout << "Name: " << name << endl;
        cout << "Account number: " << account_number << endl;
        cout << "Account type: " << account_type << endl;
        cout << "Balance: " << balance << endl;
    }

    // Static function to display rate of interest
    static void display_interest_rate() {
        cout << "Current interest rate: " << interest_rate << "%" << endl;
    }
};

double BankAccount::interest_rate = 5.0; // Initialize static data member

int main() {
    // Create an instance using parameterized constructor
    BankAccount acc1("John Doe", 123456, "Savings", 5000.0);
    // Deposit money
    acc1.deposit(1000.0);
    // Withdraw money
    acc1.withdraw(2000.0);
    // Display details
    acc1.display_details();

    // Create another instance using copy constructor
    BankAccount acc2(acc1);
    // Deposit money
    acc2.deposit(500.0);
    // Withdraw money
    acc2.withdraw(3000.0);
    // Display details
    acc2.display_details();

    // Display interest rate using static method
    BankAccount::display_interest_rate();

    return 0;
}
