#include<iostream>
using namespace std;
class Person
{
  private:
    string name;
    int age;
  public:
  void input(){
    cout << "\nInput Name : ";
    fflush(stdin);
    getline(cin, name);
    cout << "Input Age : ";
    cin >> age;
  }
  void output()
  {
    cout << "Name : " << name << "\t"
         << "Age : " << age;  
  }
};
class BaseballPlayer:Person{
  private:
    int numclot;
    int numofgoals;
  public:
  void input()
  {
    Person::input();
    cout << "\nInput Number Clothers : ";
    cin >> numclot;
    cout << "Input number of goals :";
    cin >> numofgoals;
  }
  void output()
  {
    Person::output();
    cout << "\tNum clothers : " << numclot << "\t Num of goals : " << numofgoals << endl;
    cout << "----------------------------------------------------------------------------\n";
  
  }
};
class Employee:Person{
  private:
    int salary;
  public:
  void input()
  {
    Person::input();
    cout  << "Input coefficients salary : ";
    cin >> salary;
  }
  void output()
  {
    Person::output();
    cout << "\t Coefficients salary : " << salary;
  }
};
class Superviors:Employee{
  private:
    string position;
    string allowance;
  public:
    void input()
    {
    Employee::input();
    cout << "Input position : ";
    fflush(stdin);
    getline(cin, position);
    cout << "Input allowance : ";
    fflush(stdin);
    getline(cin, allowance);
    }
    void output()
    {
    Employee::output();
    cout << "\tPosition : " << position << "\tAllowance : " << allowance << endl;
    }
};
int main()
{
  Person a;
  a.input();
  a.output();
  BaseballPlayer b;
  b.input();
  b.output();
  Employee c;
  c.input();
  c.output();
  Superviors d;
  d.input();
  d.output();
}