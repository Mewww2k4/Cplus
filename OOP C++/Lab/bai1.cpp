#include<iostream>
#include<fstream>
#include<cstring>
#include<algorithm>
#include<vector>

using namespace std;

class Passenger {   //KHACH HANG
protected:
    string name;
    int number_of;
    int price;

public:
    Passenger(string n, int num, int p) {
        name = n;
        number_of = num;
        price = p;
    }

   virtual float Pay() const = 0;

};

class Passenger1 : public Passenger {   // KHACH HANG BINH THUONG
public:
    Passenger1(string name, int number_of, int price) : Passenger(name, number_of, price) {}

    float Pay() const {
        return number_of * price * 1.1;
    }
};

class Passenger2 : public Passenger {  //KHACH HANG THAN THIET
private:
    int year;

public:
    Passenger2(string name, int number_of, int price, int y) : Passenger(name, number_of, price), year(y) {}

    float Pay() const {
        double percent_sale = min(year * 0.05, 0.5);
        double pay = number_of * price * (1 - percent_sale);
        return pay * 1.1;
    }
};

class Passenger3 : public Passenger {       //KHACH HANG DAC BIET
public:
    Passenger3(string name, int number_of, int price) : Passenger(name, number_of, price) {}

    float Pay() const {
        double pay = number_of * price * 5;
        return pay * 1.1;
    }
};
// Function pointer type for calculating payment
typedef float (*PaymentCalculator)(const Passenger&);

// Function to calculate total payment for a list of customers
float calculateTotalPayment(const vector<Passenger*>& customers, PaymentCalculator calculatePayment) {
    float totalPayment = 0.0;
    for (const Passenger* customer : customers) {
        totalPayment += calculatePayment(*customer);
    }
    return totalPayment;
}

int main() {
    ifstream inputFile("input.txt");
    ofstream outputFile("output.txt");

    if (!inputFile.is_open()) {
        cout << "Failed to open input file." << endl;
        return 1;
    }

    if (!outputFile.is_open()) {
        cout << "Failed to open output file." << endl;
        return 1;
    }

    vector<Passenger*> customers;
    int numPas1, numPas2, numPas3;

    inputFile >> numPas1 >> numPas2 >> numPas3;

    for (int i = 0; i < numPas1; i++) {
        string name;
        int quantity, unitPrice;
        inputFile >> name >> quantity >> unitPrice;
        customers.push_back(new Passenger1(name, quantity, unitPrice));
    }

    for (int i = 0; i < numPas2; i++) {
        string name;
        int quantity, unitPrice, loyaltyYears;
        inputFile >> name >> quantity >> unitPrice >> loyaltyYears;
        customers.push_back(new Passenger2(name, quantity, unitPrice, loyaltyYears));
    }

    for (int i = 0; i < numPas3; i++) {
        string name;
        int quantity, unitPrice;
        inputFile >> name >> quantity >> unitPrice;
        customers.push_back(new Passenger3(name, quantity, unitPrice));
    }
    // Calculate and write individual customer payments to output
for (size_t i = 0; i < customers.size(); i++) {
    outputFile << "Customer " << i + 1 << ": " << customers[i]->Pay() << endl;
}

// Calculate and write total payment to output
float totalPayment = calculateTotalPayment(customers, [](const Passenger& customer) {
    return customer.Pay();
});
outputFile << "Total Payment: " << totalPayment << endl;

// Clean up dynamically allocated memory
for (Passenger* passenger : customers) {
    delete passenger;
}
customers.clear(); // Clear the vector

// Close input and output files
inputFile.close();
outputFile.close();


    return 0;
}
