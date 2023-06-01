#include<iostream>
using namespace std;
class PerSon{
private:
  string name;
  int age;
public:
  PerSon(string n = "", int a);
  void get_name();
  void get_age();
};
PerSon::PerSon(string n, int a)
{
  name = n;
  age = a;
}
void PerSon::get_name()
{
  cout << "Input The Name : ";
  fflush(stdin);
  getline(cin, name); 
}