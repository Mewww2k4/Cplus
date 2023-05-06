#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i;
	char a, b;
	cout << "input : ";
	cin >> a >> b;
	if( a > b )
   	{
    	swap(a,b);
    }
	for(i = b ; i >= a ; i--)
	{
		cout << (char)i <<" : "<< i << "," << hex << i << "h" << endl;
	}
	return 0;
}
//#include <iostream>
//using namespace std;
//
//int main ()
//{
//	char start_char, end_char;
//	cout << "\n nhap 2 ki tu: ";
//	cin >> start_char >>  end_char;
//	if (start_char > end_char) {
//		swap (start_char, end_char);
//	}
//	for (int i = end_char; i >= start_char; i--)
//	{
//		cout << (char)i << ":" << i << "," << hex << i << "h" << endl;
//	}
//	
//	return 0;
//}
