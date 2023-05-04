#include<iostream>
using namespace std;

typedef struct hcn {
	int w, l;
};
is &operator >> (istream &is, hcn a)
{
	cout << "Nhap chieu rong : " ; cin >> a.w;
	cout << "Nhap chieu cao : "; cin >> a.l;
}
os &operator << (ostream &os, hcn a) 
{
	
}
