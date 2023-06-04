#include<bits/stdc++.h>
using namespace std;
class Shape{
  protected:
  double x, y;
  public:
     void Input()
     {
       cout << "x = ";
       cin >> x;
       cout << "y = ";
       cin >> y;
     }
     virtual float Area() = 0; // thuan tuy ao 
};
class Circle : public Shape{
  private:
     float r;
  public :
    void Input()
  {
      Shape::Input();
       cout << "r = ";
       cin >> r;
  }  
  virtual float Area()
  {
       return (pow(r, 2) * 3.1416);
  }

};
class Rectangle : public Shape {
      private:
        int width;
        int height;
      public :
      Rectangle(int w1, int h1)
      {
       width = w1;
       height = h1;
      }
         void Input()
         {
       Shape::Input();
       cout << "Input width : ";
       cin >> width;
       cout << "Input height : ";
       cin >> height;
         }
      virtual float Area()
      {
          return (width * height) ;
      }

};
class ArraysShape{
  
      int num_shape;
      Shape **b;
      public :
      void Input(){
          cout << "Input the number of shape : ";
          cin >> num_shape;
          a = new Shape *[num_shape];
          int answer;
          for (int i = 0; i < num_shape; i++)
          {
            cout << " Shape  " << i + 1 << ":";
            cout << "Input the Rectangle (1) or Circle (<>1) : ";
            cin >> answer;
            if(answer == 1)
            {
              Rectangle *p = new Rectangle();
              p->Input();
              a[i] = p;
            }else
            {
              Circle *q = new Circle();
              q->Input();
              a[i] = q;
            }
          }
      }
      void Area
}