#include<iostream>

using namespace std;

int main ()
{
	int *a,n;
    cout << "\nNhap so phan tu cua mang : "; cin >> n ;
    a = new int[n];
    for (int i= 0 ; i < n ; i ++)
    {
    	cout<<"\n Nhap phan tu thu " << i +1 << ":"; cin >> a[i];
    
	}
	cout <<"\n Noi dung mang : ";
	for (int i = 0 ; i < n ; i++)  // cm1 : truy cap kieu con tro 
	                               //cmt2 : 
	cout << " " << a[i];
	int t = 0 ; 
	for(int i = 0 ; i  < n ; i++)
	t += *(a+i);
	cout <<"\nTong mang = " << t ;
	delete []a; // sai : nho lai cach xoa -> dung : delete []a
}
