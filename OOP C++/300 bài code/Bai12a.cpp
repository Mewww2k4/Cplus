#include<bits/stdc++.h>

using namespace std;

int main()
{
	float a1, b1, c1, a2, b2, c2;
	float dx = 0, dy = 0, d = 0;
	cout << " Nhap a1, b1, c1 : " << endl;
	cin >> a1 >> b1 >> c1;
	cout << " Nhap a2, b2, c2 : " << endl;
	cin >> a2 >> b2 >> c2;
	
	d = (a1*b2 - a2*b1);
	dx = (c1*b2 - c2*b1);
	dy =(a1*c2 - a2*c1);
	
	
	cout << "x = " << dx/d << endl;
	cout << "y = " << dy/d;
	
	return 0;
	
	

}
