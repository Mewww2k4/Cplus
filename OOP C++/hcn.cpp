#include<iostream>

using namespace std;

typedef struct hcn
{
	int w;
	int l;
};
is &operator >> (istream &is, hcn &a)
{
	cout << "Nhap chieu rong : " ; is >> a.w;
	cout << "Nhap chieu cao : "; is >> a.l;
	return is;
}
os &operator << (ostream &os, hcn a) 
{
	os <<"\nChieu cao : " << a.l << "\nChieu rong : "<< a.w;
	return os;
}
hcn operator*(HCN a)
{
	hcn t;
	t = t.l*t.w;
	return t;	
}

int main()
{
	HCN a;
	cin >> a;
     
	return 0;
}
