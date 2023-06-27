#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Employee{
    protected:
      string name;      //ho ten
      int Year;         //namsinh
      long long c_salry;   //he so luong
    public:

      Employee(string n = "", int y = 0, long long c = 0 )
      {
        this->name = n;
        this->Year = y;
        this->c_salry = c;
      }
      int getYear()
      {
        return Year;
      }
      long long  getSalary()
      {
      	return c_salry;
	  }
      void Input()
      {
        cout << "Enter the full name :  ";
        fflush(stdin);
        getline(cin, this->name);
        cout << "Enter the Year of Birth : ";
        cin >> this->Year;
        cout << "Enter the coefficients salary : ";
        cin >> this->c_salry;
      }
      void Output()
      {
        cout << "The full name : " << name << endl;
        cout << "The Year of Birth : " << Year << endl;
        cout << "The coefficients salary : " << c_salry << endl;
      }

      virtual long long  Salary()
       {
        return c_salry * 1600;
       }
       virtual void increase_salary()
       {
        if(this->getYear() < 1970)
        {
          c_salry + 0.33;
        }
       }
       virtual ~Employee(){}
};
class Manager : public Employee{
    private:
      string pos;  //chuc vu
      double bonus;  //phu cap
    public:

   Manager(string n = "", int y = 0 , long long c = 0, string p ="", double b = 0 ) : Employee(name, Year, c_salry)
    {
        this->pos = p;
        this->bonus = b;
    }
    void Input()
    {
        Employee::Input();
        cout << "Enter the Pos : ";
        cin >> pos;
        cout << "Enter The Bonus : ";
        cin >> bonus;
    }
    void Output()
    {
        Employee::Output();
        cout << "The Pos of Manager : " << pos << endl;
        cout << "The Bonus of Manager : " << bonus << endl;
    }
    long long Salary()
    {
        return (c_salry * 1600 + bonus);
    }
    void increase_salary()
    {
      if(this->getYear() < 1970)
      {
          c_salry += 0.33;
      }
    }
    ~Manager(){}
};
int mycmp(Employee *a, Employee *b)
{
    return (a->getSalary() > b->getSalary());
}
class Company {
     private:
       int n; // so luong
       Employee **a;
    public:
       void Input_List()
       {
        cout << "Enter the number of : ";
        cin >> n;
        a = new Employee *[n];
        int choose;
        for (int i = 0; i < n; i++)
        {
          cout << "Enter (1)-Employee , (2)-Manager ";
          cin >> choose;
          if(choose == 1)
          {
            Employee *em = new Employee();
            em->Input();
            a[i] = em;
          }
          else
          {
            Manager *ma = new Manager();
            ma->Input();
            a[i] = ma;
          }
        }
       }
       void Output_List()
       {
        for (int i = 0; i < n; i++)
        {
          a[i]->Output();
        }
       }
       void Sort_List()
       {
        sort(a, a + n, mycmp);
       }
        long long  Salary() {
           long long  totalSalary = 0.0;
            for (int i = 0; i < n; i++) {
              totalSalary += a[i]->Salary();
              }
         return totalSalary;
        }

 		 void increase_salary() {
   			 for (int i = 0; i < n; i++) {
    				  a[i]->increase_salary();
   					 }
 		 }
       ~Company()
       {
        for (int i = 0; i < n; i++)
        {
          if(a!=NULL)
           delete a[i];
        }
       }

};
int main()
{
       Company c1;
       c1.Input_List();
       c1.Output_List();
       cout << "The List Employee after arranged : " << endl;
       c1.Sort_List();
       c1.Output_List();
       long long  d = c1.Salary();
       cout<<d;
       c1.increase_salary();

       return 0;
}

