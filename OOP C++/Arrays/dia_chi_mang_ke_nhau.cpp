#include<iostream>
using namespace std;
int a[5], b[5];
int main()
{
	for (int i = 0 ; i < 5 ; i ++)	a[i] = i*1;
	for (int i = 0; i < 5; i++) b[i]=(i+1)*10;
	cout <<"\nMang a: ";
	for(int i = 0 ; i < 5; i++) cout << "(" <<a[i]<<", "<< &a[i]<<")  ";
	cout <<"\n"; 
	cout << "\nMang b: ";
	for(int i = 0 ; i < 5; i++) cout << "(" <<b[i]<<", "<< &b[i]<<")  ";
	cout <<"\n";
	for(int i = 0 ; i < 10; i++) cout << "(" <<a[i]<<", "<< &a[i]<<")  ";
	for(int i = 0; i < 20 ; i++) a[i]= a[i]*9;
	cout <<"\n Mang b : ";
	for (int i = 0; i < 5; i ++ ) cout << b[i] <<"  ";	
}
