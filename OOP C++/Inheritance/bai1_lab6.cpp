#include<iostream>
#include<string>
using namespace std;
//base class
class Student{
  private :
    string name;
    string id;
  public:
  Student(){}
  //constructor,initializer list
  Student(string name, string id): name(name),id(id){}
  void Input()
  {
    cout << "Input Name : ";
    fflush(stdin);
    getline(cin, name);
    cout << "Id : ";
    fflush(stdin);
    getline(cin, id);
  }
  void display()
  {
    cout << "Name : " << name << "\nID : " << id << endl;
  }
};
//Inheritance base class
class Sport : public Student{
   private:
     int s_grade;
   public:
   Sport(){}
   Sport(string name, string id ,int s_grade):Student(name,id), s_grade(s_grade){}
   void Input()
   {
    Student::Input();
    cout << "Input S_Grade : ";
    cin >> s_grade;
   }
   void display()
   {
    Student::display();
    cout << "S_Grade : " << s_grade << endl;
   }
};
//Inheritance base class
class Exam : public Student{
    private:
        int e_grade;
    public:
    Exam(){}
    Exam(string name,string id, int e_grade):Student(name,id),e_grade(e_grade){}
    void Input()
    {
    cout << "Input E_Grade : ";
    cin >> e_grade;
    }
    void display()
    {
    cout << "E_Grade : " << e_grade << endl;
    }

};
class Result : public  Sport , public Exam {
    public:
    string result;
    Result(){}
    Result(string name, string id, int s_grade, int e_grade, string result) : Sport(name,id,s_grade), Exam(name,id,e_grade), result(result) {}
  void Input()
  {
    Sport::Input();
    Exam::Input();
    cout << "Result :";
    fflush(stdin);
    getline(cin, result);
  }
  void display()
  {
    Sport::display();
    Exam::display();
    cout << "Result : " << result << endl;
  }
};
int main()
{
  Result b("Trinh","123",7,7,"Pass");
  b.display();
  Result d;
  d.Input();
  d.display();
}