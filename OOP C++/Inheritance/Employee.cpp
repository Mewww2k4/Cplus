#include<iostream>
#include<cstring>
using namespace std;

class Employee {
protected:
    string name;
    float wage;

public:
    Employee(string n = "", float w = 0);
    string get_name() const;
    float get_wage() const;
    float pay(float hoursworked) const;
    void input();
    void display() const;
};

Employee::Employee(string n, float w) {
    name = n;
    wage = w;
}

string Employee::get_name() const {
    return name;
}

float Employee::get_wage() const {
    return wage;
}

float Employee::pay(float hoursworked) const {
    return hoursworked * wage;
}

void Employee::input() {
    cout << "Enter name: ";
    fflush(stdin);
    getline(cin, name);

    cout << "Enter wage: ";
    cin >> wage;
}

void Employee::display() const {
    cout << "Name: " << name << endl;
    cout << "Wage: " << wage << endl;
}

class Manager : public Employee {
protected:
    float bonus;
    string dept;

public:
    Manager();
    Manager(string n, float w, float b, string de);
    float pay(float hoursworked) const;
    void input();
    void display() const;
};

Manager::Manager() : Employee() {
    bonus = 0;
    dept = "";
}

Manager::Manager(string n, float w, float b, string de) : Employee(n, w) {
    bonus = b;
    dept = de;
}

float Manager::pay(float hoursworked) const {
    return Employee::pay(hoursworked) + bonus;
}

void Manager::input() {
    Employee::input();

    cout << "Enter bonus: ";
    cin >> bonus;

    cout << "Enter department: ";
    fflush(stdin);
    getline(cin, dept);
    
}

void Manager::display() const {
    Employee::display();

    cout << "Bonus: " << bonus << endl;
    cout << "Department: " << dept << endl;
}

int main() {
    Employee a,b("Ha", 2000),c;
    Manager d,e("Minh",7000,5600,"To chuc");
    a.input();
    d.input();
    a.display();
    b.display();
    d.display();
    e.display();
    cout << "Thu nhap cua a : " << a.pay(10);
    cout << "\nThu nhap cua d : " << d.pay(20);
    return 0;
}
