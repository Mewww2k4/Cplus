#include<bits/stdc++.h>
using namespace std;
class Retangle;
class Circle;

class Rectangle{
  private:
     double s;
     double a,b;
  public:
        void input()
        {
          cout <<"----------------RETANGLE----------------\n";
          cout <<"Input length a : "; cin >> a;
          cout <<"Input width b : "; cin >> b;
          s = a*b ;
        }
        void Display()
        {
          cout <<"----------------RETANGLE----------------\n";
          cout <<"Length of rectangle : " << a << endl;
          cout <<"Width of rectangle : "<< b <<endl;
          cout <<"Area of retangle S = " << s << endl;
        }
        friend bool larger(Rectangle &rectangle, Circle &circle); 

};
class Circle{
  private:
       double s ;
       double pi = 3.14, r ;
  public : 
       void input()
       {
        cout <<"----------------CIRCLE------------------\n";
        cout <<"Input radius : "; cin >> r;
        s = pi*pow(r,2);
       }
       void Display()
       {
        cout <<"----------------CIRCLE------------------\n";
        cout <<"Radius of Circle : " << r <<endl;
        cout <<"Area of Circle:  S = " << s << endl;
       } 
      friend bool larger(Rectangle &rectangle, Circle &circle); 
};
bool larger(Rectangle &rectangle, Circle &circle)
{
  return rectangle.s > circle.s;
}
int main()
{
  Rectangle a;
  a.input();
  a.Display();
  Circle b;
  b.input();
  b.Display();

  if (larger(a, b)) {
    cout << "Rectangle has a larger area than Circle.\n";
  } else {
    cout << "Circle has a larger area than Rectangle.\n";
  }

  return 0;

}