#include<iostream>
using namespace std;
class Shape{

  public:
    double h;
    double b;
  // constructor 
  Shape()
  {
    h = 0;
    b = 0;
  }
    
    void GetData()
    {
      cout << " Input height :";
      cin >> h;
      cout << " Input base : ";
      cin >> b;
    }
    //khai bao ham ao
    virtual void DisplayArea()
    {
        
    }
};
class Triangle : public Shape{
    public: 
    void DisplayArea()
    {
      cout << "Height is : " << h << endl;
      cout << "Area of Triangle : " << (h * b) / 2.0 << endl;
    }

};
class Rectangle: public Shape{
    public:
    void DisplayArea()
    {
      cout << " Area of Rectangle is : " << (h * b) << endl;
    }
};
int main()
{
    Shape *t; // pointer t;
    Triangle a;
    a.GetData();
     t = &a; //
    t->DisplayArea();
    Rectangle b;
    b.GetData();
    t = &b;
    t->DisplayArea();
    return 0;
}