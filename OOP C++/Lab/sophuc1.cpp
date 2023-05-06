#include <iostream>
using namespace std;

class Complex {
    private:
        int real, imag;
    
    public:
        Complex();
        
        void display();
        
        
        Complex add(Complex c) {
            Complex res;
            res.real = real + c.real;
            res.imag = imag + c.imag;
            return res;
        }
      
};
Complex::Complex(int r, int i)
        {  
            real = r;
            imag = i;
        }
void  Complex::display() 
        {
            cout << real << " + " << imag << "i" << endl;
        }

int main() {
    Complex c1(3, 4);
    Complex c2(2, -5);
    
    cout << "c1 = ";
    c1.display();
    cout << "c2 = ";
    c2.display();
    
    Complex c3 = c1.add(c2);
    cout << "c3 = ";
    c3.display();
    
    return 0;
}

