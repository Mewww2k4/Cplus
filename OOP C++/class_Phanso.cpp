#include<bits/stdc++.h>
using namespace std;
class PhanSo{
	private : 
	        
	public :
			float tu;
	        float mau;
		     PhanSo cong();
		     void Input();
		     void Outputt();
};

void PhanSo::Input(){
	cout <<"Nhap tu : "; cin >> this->tu;
	cout <<"Nhap mau : "; cin >> this->mau;
}
void PhanSo::Outputt()
{
	cout << tu << "/" << mau <<endl;
}
PhanSo operator+(PhanSo a, PhanSo b)
{
	PhanSo t;
	t.tu = a.tu*b.mau + a.mau*b.tu;
	t.mau = a.mau*b.mau;
	return t;
}
int main()
{
	PhanSo a, b ,c;
	a.Input();
	b.Input();
	a.Outputt();
	b.Outputt();
	 c = a + b;
	cout <<"\nTong phan so : " ;
	c.Outputt();
   return 0;
}
