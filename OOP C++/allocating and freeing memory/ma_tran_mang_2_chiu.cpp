#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int **a, m,n;
	cout <<"\nNhap so dong : "; cin >> m;
	cout <<"\nNhap so cot : "; cin >> n;
	
	a = new int*[m];
	for (int i = 0 ; i < m ; i++)
    a[i]= new int [n];
	for (int i = 0 ; i < n ; i++)
	
	for (int i = 0 ; i < m ; i++)
	    for (int j = 0; j < n ; j++ )
	    a[i][j] = rand()%100;
	cout << "\nNoi dung ma tran : ";
	for (int i = 0; i < m ; i++)
	{
		cout << "\n";
		for(int j = 0 ; j < n ; j++)
		cout << a[i][j] << "  ";
	 } 
	cout << "\n So lon nhat trong mang : ";
	int max = a[0][0];
		for (int i = 0; i < m ; i++)
	{
		cout << "\n";
		for(int j = 0 ; j < n ; j++)
		if (a[i][j] > max)
	    max = a[i][j];
	   
	}
	cout << max;  
	 for( int i = 0 ; i < m ; i ++)
	 {
	 	 int t = 0 ;
	 	 for(int j = 0; j < n ; j ++)
	 	t = t + a[i][j];
	 	cout << "\nTong  hang " << i + 1 << " = " << t;
	 }
	 for(int j = 0 ; j < n ; j++)
	 {
	 	int t = 0 ;
	 	for(int i = 0 ; i < m ; i++)
	 	t = t + a[i][j];
	 	cout << "\nTong cot" << j + 1 << "=" << t;
	 	
	 }
	 
	 
}
