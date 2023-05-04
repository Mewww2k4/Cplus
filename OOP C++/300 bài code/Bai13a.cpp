#include<iostream>

using namespace std;

int main()
{
	int d, m, y, top, dayofweek;//top so ngay toi da trong thang
	cout << "Input day, month, year : ";
	cin >> d >> m >> y; 
	if(y < 1582)
	{
		cout << " \nCalendar Gergorian starting in 1582 ";
		return 1;
	}
	if(m < 1 && m > 12)
	{
		cout <<"\nNot Snobbery ";
		return 2;
	}
	switch (m)
	{
		case 4: case 6: case 9: case 11: top = 30; break;
		case 2 : top = 28 + (( y % 4 == 0 && y % 100 ) || y % 400==0); break ;
		default : top = 31; 
	}
	if (d < 1 || d>top )
	{
		cout <<"\nInvalid date!!!";
		return 3;
	}
	cout << "\nValid!!!";
	y -= (14-m)/12;
	m+= 12*((14-m)/12)-2;
	dayofweek = ( d+ y + y /4 - y /100 + y / 400 + (31* m)/12)%7; 
	if(!dayofweek) cout << "\nSunday ";
	else cout <<"\nThu "<<dayofweek + 1;
	return 0;
    
	
}
