#include<iostream>
using namespace std;
class Shape{
  protected:
    float width, height;
  public:
  void set_data(float a, float b){
    width = a;
    height = b;
  }
  virtual void Display(){

  }
};
class Rectangle : public Shape{
  public:
  void Display()
  {
    cout << "Area of Rectangle : " << (width * height) << endl;
  }
};
class Triangle : public Shape{
   public: 
   void Display()
   {
    cout << "Area of triangle : " << (width * height) / 2.0 << endl;
   }
};
int main()
{
   Rectangle a;
   a.set_data(5,6);
   a.Display();
   Triangle b;
   b.set_data(7, 8);
   b.Display();
}