#include<iostream>

using namespace std;
float *b;
int a[10];
int main ()
{
//	int a[10];
//	float *b;		
	char c[] = {'a','b','c','d','e'};
	cout << "\na = " ;	for(int i = 0 ; i < 10 ; i++)   cout <<"   "<< a[i]; 
   	b = new float[100];  // khoi tao bien new
	cout << "\nb= " ;  for (int i = 0 ; i < 10 ; i++) 	cout << " " << b[i];
	cout << "\nc = " ;	for(int i = 0 ; i < 10 ; i++)   cout <<"   "<< c[i]; 
	
	cout << "\ndia chi cua a :" << a;
	cout << "\ndia chi cua b :" << &b;
	cout << "\ndia chi cua c :" << &c;
	
}
	