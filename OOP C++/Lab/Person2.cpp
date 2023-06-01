#include<iostream>
using namespace std;
class Person{
  protected:
    string name;
    string town;
    int year;
    public:
    Person(string n = "", string t = "", int y = 0)
    {
      name = n;
      town = n;
      year = y;
    }
    void Input(){
      cout << "Input the name : ";
      fflush(stdin);
      getline(cin, name);
      cout << "Input the town : ";
      fflush(stdin);
      getline(cin, town);
      cout << "Input the year : ";
      cin >> year;
    }
    void Output()
    {
      cout << "The Name : " << name << endl;
      cout << "The Town : " << town << endl;
      cout << "The Year : " << year << endl;
    }

};
class Employee : public Person{
  protected:
    double salary;
  public:
   double getSalary() const {
        return salary;
    }

    void setSalary(double newSalary) {
        salary = newSalary;
    }
  void Input()
  {
      Person::Input();
      cout << "Input The salary : ";
      cin >> salary;
  }
  void Output(){
      Person::Output();
      cout << "The Salary : " << salary*1500 << endl;
  }
};
class Manager : public Employee{
  protected:
    string position;
    double allow;
  public :
  void Input()
  {
      Employee::Input();
      cout << "Input the Position :";
      fflush(stdin);
      getline(cin, position);
      cout << "Input allow : ";
      cin >> allow;
  }
  void Output()
  {
      Employee::Output();
      cout << "The Position : " << position << endl;
      cout << "The allow : " << allow << endl;
      cout << "Salary : " << ((salary*1500) + allow) << endl;
  }
};
class Company{
  private:
    int n;
    Employee *a;
  public:
  void Input(){
      cout << "Input Employment : ";
      cin >> n;
      a = new Employee[n];
      for (int i = 0; i < n; i++)
      {
        cout << "Input Employment the " << (i + 1) << ":" << endl;
        a[i].Input();
      }
  }
  void Output(){
      cout << "-----------THE LIST EMPLOYMENT-------------" << endl;
      for (int i = 0; i < n; i++)
      {
        a[i].Output();
      }
  }
  void Sort_Salary()
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j].getSalary() < a[j + 1].getSalary())
            {
                Employee temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

  void increase_salary(double rate)
{
    for (int i = 0; i < n; i++)
    {
        double currentSalary = a[i].getSalary();
        double increasedSalary = currentSalary * (1 + rate);
        a[i].setSalary(increasedSalary);
    }
}

};
int main()
{
  Person a;
  cout << "---------------PERSON----------------" << endl;
  a.Input();
  a.Output();
  cout << "---------------EMPLOYEE--------------" << endl;
  Employee b;
  b.Input();
  b.Output();
  cout << "---------------MANAGER--------------" << endl;
  Manager c;
  c.Input();
  c.Output();
  cout << "---------------COMPANY--------------" << endl;
  Company company;
  company.Input();

  cout << "Before sorting:" << endl;
  company.Output();

  cout << "After sorting by salary:" << endl;
  company.Sort_Salary();
  company.Output();

  cout << "Increasing salaries by 10%:" << endl;
  company.increase_salary(0.1);
  company.Output();
}
