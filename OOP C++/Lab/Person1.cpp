#include<iostream>
using namespace std;

class Person{
     private:
            string LtName;
            string FtName;
            string HmTown;
            int YrBirth;
     public: 
            friend istream &operator >> (istream &is, Person &b)
            {
              cout <<"Input LastName : "; getline(is, b.LtName);
              cout <<"Input FirstName : "; getline(is, b.FtName);
              cout <<"Input Home Town : "; getline(is, b.HmTown);
              cout <<"Input Year Of Birth : "; cin >> b.YrBirth;
              return is;  

            };
            friend ostream &operator << (ostream &os, Person &b)
            {
              os <<"Last Name "<<"\t"<<"First Name "<<"\t"<<"Home Town"<<"\t"<<"Year of Birth"<<endl;
              os <<b.LtName<<"\t\t"<<b.FtName<<"\t\t"<<b.HmTown<<"\t"<<b.YrBirth<<endl;
              return os; 
            }
            Person(string h = "", string t = "", string q ="", int ns = 0) // contructer
            {
              LtName = h;
              FtName = t;
              HmTown = q;
              YrBirth = ns;
            }
            Person(const Person &b) //Function copy 
            {
                  LtName = b.LtName;
                  FtName = b.FtName;
                  HmTown = b.HmTown;
                  YrBirth = b.YrBirth;
            }

  };
int main(){
  Person a;
       cin >> a;
       cout << a;
  Person b(a);
  cout << b;
}
