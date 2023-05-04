#include<bits/stdc++.h>
using namespace std;

class Complex {
    private:
        int real;
        int imag;
    public: 
        Complex(int r = 0, int i = 0);
        void Input();
        void Display();
        Complex operator+(Complex const &obj);
};

Complex::Complex(int r, int i)
{
    real = r;
    imag = i;
}

void Complex::Input()
{
    cout << "Number real : "; cin >> real;
    cout << "Number imag : "; cin >> imag;
}

void Complex::Display()
{
    cout << real << "+ i" << imag << endl;
}

Complex Complex::operator+(Complex const &obj)
{
    Complex res;
    res.real = real + obj.real;
    res.imag = imag + obj.imag;
    return res;
}

int main()
{
    Complex a, b, c;
    cout << "Input the first complex number: ";
    a.Input();
    cout << "Input the second complex number: ";
    b.Input();

    a.Display();
    b.Display();
    
    c = a + b;

    cout << "Result = ";
    c.Display();
    
    return 0;
}
