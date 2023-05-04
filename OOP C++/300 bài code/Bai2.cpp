#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
    double xa,ya,xb,yb;
    double ab;
    cout << "Nhap toa do diem A :";
    cin >> xa >> ya;
    cout << "Nhap toa do diem B :" ;
    cin >> xb >> yb;
    ab=sqrt((xb-xa)*(xb-xa)+(yb-ya)*(yb-ya));
    cout << " |AB| = " << ab;
}