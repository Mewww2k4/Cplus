#include<iostream>
using namespace std;

class PhanSo{
        private: 
              //  float tu;
              //  float mau;
        public: 
               float tu;
               float mau;
               void Input();
               void Output();
};
void PhanSo::Input()
{
  cout<<"Input tu: "; cin >> this->tu;
  cout<<"Input mau: "; cin >> this->mau;
}
void PhanSo::Output()
{
  cout << tu <<"/"<< mau <<endl;
}
PhanSo operator+(PhanSo a, PhanSo b)
{
  PhanSo kq;
     kq.tu = a.tu*b.mau + b.tu*a.mau;
     kq.mau = a.mau*b.mau;
     return kq;
}
int main()
{
  PhanSo a, b,c;
  cout <<"Nhap phan so a:  \n";
  a.Input();
  cout <<"\nNhap phan so b :  \n";
  b.Input();
  a.Output();
  b.Output();
  c = a + b ;
  cout <<"Tong 2 phan so : ";
  c.Output();
}
 