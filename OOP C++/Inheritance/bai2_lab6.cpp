#include<iostream>
using namespace std;
class Shape{

  public:
    double h;
    double b;

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
      Triangle a;
      a.GetData();
      a.DisplayArea();
      Rectangle b;
      b.GetData();
      b.DisplayArea();
      return 0;
}