#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    double a, b, c, d=0;
    cout << "Nhap vao 3 so nguyen :";
    cin >> a >> b >> c;
   
    d = b*b - 4.0*a*c;
      if(a!=0){
    if(d<0){
    cout << "Phuong trinh vo nghiem " << "\n ";    
    }
    else if(d == 0){

        cout << " phuong trinh co nghiem kep x1 = x2 = " << -b/(2.0*a) << "\n";
       }
       else {
        cout << "Phuong trinh co 2 pb \n";
        cout << "x1 = " << (-b + sqrt(d)) / (2.0 * a) << "\n";
        cout << "x2 = " << (-b - sqrt(d)) / (2.0 * a) << "\n";
       }
    }
    return 0;
}
