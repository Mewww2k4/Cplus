#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Account {
protected:
    string accountNumber;
    double balance;

public:
    Account(const string& accNumber, double initialBalance)
        : accountNumber(accNumber), balance(initialBalance) {}

    virtual void deposit(double amount) {
        balance += amount;
    }

    virtual void withdraw(double amount) {
        if (balance >= amount)
            balance -= amount;
        else
            cout << "Insufficient balance." << endl;
    }

    virtual void displayAccountInfo() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: $" << balance << endl;
    }
};

class SavingsAccount : public Account {
private:
    double interestRate;

public:
    SavingsAccount(const string& accNumber, double initialBalance, double interestRate)
        : Account(accNumber, initialBalance), interestRate(interestRate) {}

    void calculateInterest() {
        double interest = balance * interestRate;
        deposit(interest);
    }

    void displayAccountInfo() override {
        cout << "Savings Account" << endl;
        Account::displayAccountInfo();
        cout << "Interest Rate: " << interestRate << endl;
    }
};

class CheckingAccount : public Account {
private:
    double transactionFee;

public:
    CheckingAccount(const string& accNumber, double initialBalance, double fee)
        : Account(accNumber, initialBalance), transactionFee(fee) {}

    void deductTransactionFee() {
        if (balance >= transactionFee)
            balance -= transactionFee;
        else
            cout << "Insufficient balance to deduct the transaction fee." << endl;
    }

    void displayAccountInfo() override {
        cout << "Checking Account" << endl;
        Account::displayAccountInfo();
        cout << "Transaction Fee: $" << transactionFee << endl;
    }
};

int main() {
    vector<Account*> accounts;

    // Create SavingsAccount and CheckingAccount objects
    SavingsAccount savingsAccount("SA001", 1000.0, 0.05);
    CheckingAccount checkingAccount("CA001", 2000.0, 5.0);

    // Perform operations on accounts
    savingsAccount.deposit(500.0);
    savingsAccount.calculateInterest();
    savingsAccount.displayAccountInfo();

    checkingAccount.withdraw(100.0);
    checkingAccount.deductTransactionFee();
    checkingAccount.displayAccountInfo();

    return 0;
}
