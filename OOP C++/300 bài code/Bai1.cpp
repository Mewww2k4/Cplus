#include<iostream>
#include<math.h>

using namespace std;
int main()
{
    float pi=3.14;
    double S,V=0;
    cout << " Nhap dien tich :";
    cin >> S; 
    V=(4*pi*pow(sqrt(S/(4*pi)),3)/3);
    cout << "The tich mat cau : " << V;
    return 0;
       


}