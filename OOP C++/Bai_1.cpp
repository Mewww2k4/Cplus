#include<iostream> 
using namespace std; 
int main() 
{ int n;
 double s = 0;
  do {
  cout <<"Input n : ";
  cin >> n; } while(n<=0); 
	for(int i = 1 ; i <= n ; i++) 
	{
	 s += 1.0/(2*i);
	  }
	 cout <<"Tong la S = " << s << endl; 
	 return 0; }
