#include<bits/stdc++.h>

using namespace std;

int main()
{
	int *a;
	int n;
	cout << "\n NHap so phan tu can cap phat : "; cin >> n;
	a = new int[n];
	
	for(int i = 0; i < n ; i++)
	a[i] = rand();
	srand(time(NULL));
	cout <<"\n cac so vua sinh ngau nhien : " <<"\n";
	for(int i = 0; i < n ; i++)
    cout << a[i] <<"   ";
    delete []a;
}
