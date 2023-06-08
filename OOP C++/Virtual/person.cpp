#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

class Person {
protected:
    string name;
    int yearOfBirth;

public:
    virtual void input() {
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter Year of Birth: ";
        cin >> yearOfBirth;
    }

    virtual void output() {
        cout << "Name: " << getName() << endl;
        cout << "Year of Birth: " << yearOfBirth << endl;
    }

    string getName() const {
        return name;
    }

    virtual double calculate() = 0;
};

class Inpatient : public Person {
private:
    string diseaseName;
    double medicalExpenses;

public:
    void input() {
        Person::input();
        cout << "Enter Disease Name: ";
        cin.ignore();
        getline(cin, diseaseName);
        cout << "Enter Medical Expenses: ";
        cin >> medicalExpenses;
    }

    void output() {
        Person::output();
        cout << "Disease Name: " << diseaseName << endl;
        cout << "Medical Expenses: " << medicalExpenses << endl;
    }

    double calculate() {
        double totalCost = medicalExpenses;
        if (yearOfBirth < 1960)
            totalCost *= 0.9; // 10%
        return totalCost;
    }
};

class Outpatient : public Person {
private:
    string diagnosedDiseaseName;
    double drugMoney;
    double staysMoney;

public:
    void input() {
        Person::input();
        cout << "Enter Diagnosed Disease Name: ";
        cin.ignore();
        getline(cin, diagnosedDiseaseName);
        cout << "Enter Drug Money: ";
        cin >> drugMoney;
        cout << "Enter Stays Money: ";
        cin >> staysMoney;
    }

    void output() {
        Person::output();
        cout << "Diagnosed Disease Name: " << diagnosedDiseaseName << endl;
        cout << "Drug Money: " << drugMoney << endl;
        cout << "Stays Money: " << staysMoney << endl;
    }

   double calculate() {
    double totalCost = drugMoney + staysMoney;
    if (yearOfBirth < 1960) {
        double drugDiscount = drugMoney * 0.12;
        double staysDiscount = staysMoney * 0.08;
        totalCost -= (drugDiscount + staysDiscount);
    }
    return totalCost;
}

};

class PhongKham {
private:
    vector<Person*> patientList;

public:
    void inputPatientList() {
        int numPatients;
        cout << "Enter the number of patients: ";
        cin >> numPatients;

	   for (int i = 0; i < numPatients; i++) {
    cout << "Patient " << i + 1 << ":" << endl;
    int patientType;
    cout << "Enter patient type (1 - Inpatient, 2 - Outpatient): ";
    cin >> patientType;

    Person* patient = 0; // Khởi tạo con trỏ patient với giá trị 0

    if (patientType == 1) {
        patient = new Inpatient();
    } else if (patientType == 2) {
        patient = new Outpatient();
    } else {
        cout << "Invalid patient type. Skipping..." << endl;
        continue;
    }

    patient->input();
    patientList.push_back(patient);
}

    }

    void printPatientList() {
    cout << "Patient List:" << endl;
    for (int i = 0; i < patientList.size(); i++) {
        Person* patient = patientList[i];
        patient->output();
        double totalCost = patient->calculate();
        cout << fixed << setprecision(2);
        cout << "Total Cost: $" << totalCost << endl;
        cout << endl;
         }
   }


    void sortPatientListByName() {
        sort(patientList.begin(), patientList.end(), [](Person* a, Person* b) {
            return a->getName() < b->getName();
        });
    }

    double calculateTotalPayment() {
    double totalPayment = 0.0;
    for (int i = 0; i < patientList.size(); i++) {
        totalPayment += patientList[i]->calculate();
    }
    return totalPayment;
   }

    ~PhongKham() {
    for (int i = 0; i < patientList.size(); i++) {
        delete patientList[i];
    }
  }

};

int main() {
    PhongKham phongKham;
    phongKham.inputPatientList();
    phongKham.sortPatientListByName();
    phongKham.printPatientList();

    double totalPayment = phongKham.calculateTotalPayment();
    cout << "Total Payment: $" << fixed << setprecision(2) << totalPayment << endl;

    return 0;
}
