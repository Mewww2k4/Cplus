#include <iostream>
using namespace std;

class Fraction
{
    long nu, de;
public:
    Fraction(long n, long d)
    {
        nu = n;
        de = d;
    }
    void display()
    {
        cout << nu << "/" << de << endl;
    }
    friend Fraction operator/(Fraction f1, Fraction f2)
    {
        f1.nu = f1.nu * f2.de;
        f1.de = f1.de * f2.nu;
        return f1;
    }
    friend bool operator==(Fraction f1, Fraction f2)
    {
        return f1.nu * f2.de == f1.de * f2.nu;
    }
    friend Fraction operator-(Fraction f1, long i2)
    {
        f1.nu = f1.nu - f1.de * i2;
        return f1;
    }
};

int main()
{
    Fraction a(1, 2);
    Fraction b(3, 4);
    Fraction c = a / b;
    c.display();
    Fraction d = a - 2;
    d.display();
    return 0;   //
}
