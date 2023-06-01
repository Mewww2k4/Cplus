#include<iostream>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;

class Employee {
  char* name;
  int age;
  float c_salary; // he so luong

public:
  Employee() {}
  Employee(char* n1, int t1 = 0, float s1 = 0) {
    name = new char[strlen(n1)];
    strcpy(name, n1);
    age = 1;
    c_salary = s1;
  }

  void Input() {
    char t[20];
    cout << "Input Name: ";
    cin.ignore(); // Clear input buffer
    cin.getline(t, 20);
    name = new char[strlen(t)];
    strcpy(name, t);
    cout << "Input Age: ";
    cin >> age;
    cout << "Input Salary: ";
    cin >> c_salary;
  }

  virtual void Output() {
    cout << "\nName: " << name << "\tAge: " << age << "\tSalary: " << c_salary;
  }
};

class Manager : public Employee {
  string dept; // phong ban
  float bonus; // thuong

public:
  void Input() {
    Employee::Input();
    cout << "Departments in charge: ";
    cin.ignore(); // Clear input buffer
    getline(cin, dept);
    cout << "Bonus: ";
    cin >> bonus;
  }

   void Output() {
    Employee::Output();
    cout << "\tDepartment in charge: " << dept << "\tPosition allowances: " << bonus;
  }
};

int main() {
  Employee e1, r;
  cout << "---------------EMPLOYEE--------------\n";
  e1.Input();

  Manager m1;
  cout << "---------------MANAGER--------------\n";
  m1.Input();

  e1.Output();
  m1.Output();

  cout << "\nReview employees or managers (1 / <> 1): ";
  int answer;
  cin >> answer;
  Employee *p;
  if (answer == 1) {
    p = &e1;
  } else {
    p = &m1;
  }

  p->Output();

  return 0;
}
