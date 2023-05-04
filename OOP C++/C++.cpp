#include<iostream>

using namespace std ;

void Input(int a[], int &n)
{
	for(int i = 0 ; i < n ; i++)
	{
		cout << "\nInput Array a[" << i << "] = " ;
		cin >> a[i];
	}
}
void Output(int a[], int n)
{
	for(int i = 0; i < n ; i++)
	{
		cout << a[i] << "  ";
	}
}

int main()
{
	int a[100] ;
	int n;
	cout << "\nInput value n : ";
	cin >> n;
	
	Input(a,n);
	cout << "\nArray after input : ";
	Output(a,n);
	
	return 0;
}
