#include<iostream>
using namespace std;
class Complex{
    private:
           int real;
           int imag;
    public:
           Complex()
           {
             real = 0;
             imag = 0;
           }
           Complex(int r = 0 , int i = 0)
           {
             real = r;
             imag = i;
           }
           Complex(const Complex &b)
           {
             real = b.real;
             imag = b.imag;
           }
           void Display()
           {
                if(imag == -1)
                {
                cout << "complex: "<< real << "-i" << endl;
                }
                 else
                 {
                   cout << "complex: "<< real << imag << "i" << endl;
                 }
                //    if(imag == 1)
                //  {
                //  cout << "complex: "<< real << " + i"<< endl;
                //  }
                //     else
                //     {
                //     cout << "complex: "<< real << " + " << imag << "i" << endl;
                //     }
            }
           
          };
int main()
{
            Complex c1(1, -1);
            Complex c2(c1);
          
            c1.Display();
            c2.Display();
          
}