#include<bits/stdc++.h>
using namespace std;

class Student{
 protected:
  string id;
  string name;
 public:
  Student(){
  }
  Student(string id, string name) : id(id), name(name){}
  
  void input(){
   cout<<"Nhap id: ";
   getline(cin,id);
   cout<<"Nhap name: ";
   getline(cin,name);
  }
  void display(){
   cout<<"ID: "<<id<<endl;
   cout<<"Name: "<<name<<endl;
  }
};
class Sport : public Student{
 private:
  int s_grade;
 public:
  Sport(){
  }
  Sport(string id, string name, int s_grade) : Student(id,name), s_grade(s_grade) {}
  void input(){
   Student::input();
   cout<<"Nhap so s_grade: ";
   cin>>s_grade;
  }
  void display(){
   Student::display();
   cout<<"S_Grade: "<<s_grade<<endl;
  }
};
class Exam : public Student{
 private:
  int e_grade;
 public:
  Exam(){
  }
  Exam(int e_grade) : e_grade(e_grade) {}
  
  void input(){
   cout<<"Nhap so e_grade: ";
   cin>>e_grade;
   cin.ignore();
  }
  void display(){
   cout<<"E_Grade: "<<e_grade<<endl;
  }
};
class Result : public Sport, public Exam {
 public:
  string s;
  Result(){
  }
  Result(string id, string name, int s_grade, int e_grade, string s) : Sport(id,name,s_grade), Exam(e_grade), s(s) {
  }
  void input(){
   Sport::input();
   Exam::input();
   cout<<"Nhap ket qua: ";
   getline(cin,s);
  }
  void display(){
   cout<<"\n";
   Sport::display();
   Exam::display();
   cout<<"Result: "<<s<<endl;
  }
};
int main(){
 Result r;
 r.input();
 r.display();
 
 return 0;
}