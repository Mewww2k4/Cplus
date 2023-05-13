#include<iostream>
using namespace std;
class Rectangle
{
  private:
    double length;
    double width;
  public:
    void setLength(double);
    void setWidth(double);
    double getlength() const;
    double getWidth() const;
    double getArea() const;
};
void Rectangle::setLength(double l)
{
    length = l;
}
void Rectangle::setWidth(double w)
{
    width = w;
}
double Rectangle::getlength() const
{
    return length;
}
double Rectangle::getWidth() const{
    return width;
}
double Rectangle::getArea() const
{
    return length * width;
}
int main()
{
    Rectangle box;
    double rectWidth; // Local variable for width 
    double rectLength; // Local variable for length 
     
// Get the rectangle's width and length from the user. 
    cout << "This program will calculate the area of a rectangle.\n";
    cout<< " What is the width? " << endl;
    cin >> rectWidth; 


    cout << "What is the length? "; 
    cin >> rectLength; 
 
 // Store the width and length of the rectangle 
 // in the box object. 
 box.setWidth(rectWidth); 
box.setLength(rectLength); 
 
 cout << "Here is the rectangle's data:\n"; 
 cout << "Width: " << box.getWidth() << endl; 
 cout << "Length: " << box.getlength() << endl; 
 cout << "Area: " << box.getArea() << endl; 
 return 0; 
}