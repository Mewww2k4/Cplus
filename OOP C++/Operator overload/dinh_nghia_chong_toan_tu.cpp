#include<iostream>
using namespace std;

typedef struct ps { 
	int t, m;
 };
istream &operator >> (istream &is, ps &a)
{
	cout <<"\n tu so : "; is >> a.t;
	do 
	{
		cout << "Nhap mau : " ; 
		is >> a.m;
	} 
	while(a.m==0);
	return is;
}
ostream &operator<<(ostream &os, ps a)
{
	os << a.t << "/" << a.m ;
	return os;
}
ps operator+(ps a, ps b)
{
	ps t;
	t.t = a.t*b.m + b.t*a.m;
	t.m = a.m*b.m;
	return t;
}
ps operator/(ps a, ps b)
{
	ps t;
	t.t = a.t*b.m + b.t*a.m;
	t.m = a.m*b.m;
	return t;
	
}
int main(){
	ps a, b, c, d;
	cout <<"Nhap 2 phan so a, b : " << endl; 
	cin >> a;
	cin >> b;
	c=a+b;
	d=a/b;
	cout << " \n a+ b = " << c;
	 
}
