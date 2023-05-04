// cho biết lương kì 2 của cán bộ tính theo công thức
#include<iostream>
#include<stdio.h>
using namespace std;

int main ()
{
    int bl , n, lk1;
    float  lk2 = 0 ;
    cout << "Nhap bac luong : " << " \n "; cin >> bl ;
    cout << "Nhap n ngay : " << "\n "; cin >> n;
    cout << "Nhap cac khoan tien da linh o ki 1 : " << "\n " ; cin >> lk1; 
    lk2 = float (bl * n / 26) - lk1;
    cout << "Luong ki 2 cua can bo la: " << lk2;
    printf("%c%c%c%c%c%c%c%c", 7,7,7,7,7,7,7);

}
