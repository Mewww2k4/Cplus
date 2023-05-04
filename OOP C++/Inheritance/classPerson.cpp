#include<iostream>
using namespace std;
class Person
{
  private:
    string Name;
    int year;
  public:
  //Person(string Name1 ="Trinh", int year1 = 2004)
  void Nhap()
  {
    cout << "\nInput Name : ";
    fflush(stdin);
    getline(cin, Name);
    cout << "Year : ";
    cin >> year;
  }
  void in()
  {
    cout << "\n Name: " << Name << "\tYear :" << year;
  }

};
class BaseballPlayer:Person
{
  private:
    int soao;
    int sobanthang;
  public:
    void Nhap()
    {
    Person::Nhap();
    cout << "\nNhap so ao :";
    cin >> soao;
    cout << "Nhap so ban thang da ghi : ";
    cin >> sobanthang;
    }
    void in()
    {
        Person::in();
        cout << "\n so ao dang mac : " << soao << "\t so ban thang : " << sobanthang;
    }
};
class Employee:Person
{
  private:
    int hesoluong;
  public:
  void Nhap()
    {
    Person::Nhap();
    cout << "Nhap he so luong : ";
    cin >> hesoluong;
    }
    void in()
    {
        Person::in();
        cout << "\n He so luong : " << hesoluong << endl;
    }
};

class Supervisor:Employee
{
  private:
    string chucvu;
    int phucap;
  public: 
  void Nhap()
  {
        Employee::Nhap();
        cout << "Nhap chuc vu : ";
        fflush(stdin);
        getline(cin, chucvu);
        cout << "Nhap so phu cap :";
        cin >> phucap;
  }
  void in(){
  Employee::in();
  cout << "Chuc vu : " << chucvu << "\t Phu cap : " << phucap << endl;
  }

};
int main()
{
    Person a;
    a.Nhap();
    a.in();
    BaseballPlayer b;
    b.Nhap();
    b.in();
    Employee c;
    c.Nhap();
    c.in();
    Supervisor d;
    d.Nhap();
    d.in();
}
