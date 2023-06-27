#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Employee {
protected:
    string name;          // Full name
    int Year;             // Year of birth
    double c_salary;      // Coefficient salary

public:
    Employee(string n = "", int y = 0, double c = 0) {
        name = n;
        Year = y;
        c_salary = c;
    }

    int getYear() {
        return Year;
    }

    double getSalary() {
        return c_salary;
    }

    void Input() {
        cout << "Enter the full name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter the year of birth: ";
        cin >> Year;
        cout << "Enter the coefficient salary: ";
        cin >> c_salary;
    }

    void Output() {
        cout << "Full name: " << name << endl;
        cout << "Year of birth: " << Year << endl;
        cout << "Coefficient salary: " << c_salary << endl;
    }

    virtual double Salary() {
        return c_salary * 1600;
    }

    virtual void increase_salary() {
        if (Year < 1970) {
            c_salary += 0.33;
        }
    }

    virtual ~Employee() {}
};

class Manager : public Employee {
private:
    string pos;   // Position
    double bonus; // Bonus

public:
    Manager(string n = "", int y = 0, double c = 0, string p = "", double b = 0)
        : Employee(n, y, c) {
        pos = p;
        bonus = b;
    }

    void Input() {
        Employee::Input();
        cout << "Enter the position: ";
        cin.ignore();
        getline(cin, pos);
        cout << "Enter the bonus: ";
        cin >> bonus;
    }

    void Output() {
        Employee::Output();
        cout << "Position: " << pos << endl;
        cout << "Bonus: " << bonus << endl;
    }

    double Salary() {
        return (c_salary * 1600) + bonus;
    }

    void increase_salary() {
        if (Year < 1970) {
            c_salary += 0.33;
        }
    }

    ~Manager() {}
};

bool mycmp(Employee* a, Employee* b) {
    return (a->getSalary() > b->getSalary());
}

class Company {
private:
    int n;               // Number of people
    vector<Employee*> a; // Vector of employees

public:
    void Input_List() {
        cout << "Enter the number of employees: ";
        cin >> n;
        a.resize(n);

        int choose;
        for (int i = 0; i < n; i++) {
            cout << "Enter (1) for Employee, (2) for Manager: ";
            cin >> choose;

            if (choose == 1) {
                Employee* em = new Employee();
                em->Input();
                a[i] = em;
            } else {
                Manager* ma = new Manager();
                ma->Input();
                a[i] = ma;
            }
        }
    }

    void Output_List() {
        for (int i = 0; i < n; i++) {
            a[i]->Output();
        }
    }

    void Sort_List() {
        sort(a.begin(), a.end(), mycmp);
    }

    double Total_Salary() {
        double totalSalary = 0.0;
        for (int i = 0; i < n; i++) {
            totalSalary += a[i]->Salary();
        }
        return totalSalary;
    }

    void Increase_Salary() {
        for (int i = 0; i < n; i++) {
            a[i]->increase_salary();
        }
    }

    ~Company() {
        for (int i = 0; i < n; i++) {
            if (a[i] != nullptr) {
                delete a[i];
            }
        }
    }
};

int main() {
    Company c1;
    c1.Input_List();
    cout << "\nThe List of Employees:\n";
    c1.Output_List();

    cout << "\nList of Employees after sorting by salary in descending order:\n";
    c1.Sort_List();
    c1.Output_List();

    cout << "\nTotal Salary: " << c1.Total_Salary() << endl;

    cout << "\nIncreasing salary for people born before 1970...\n";
    c1.Increase_Salary();

    cout << "\nList of Employees after increasing salary:\n";
    c1.Output_List();

    return 0;
}

