#include<bits/stdc++.h>

using namespace std;

int main()
{
	int *a;
	int n;
	a= new int ;
	cout <<"\n dia chi a = " << a << "\t gia tri a =" << *a;
	delete a;
	double *b = new double[5];
	cout <<"\n mang b : ";
	for( int i = 0; i < 5; i++)
	cout << b[i] << "  ";
	delete []b;
}
