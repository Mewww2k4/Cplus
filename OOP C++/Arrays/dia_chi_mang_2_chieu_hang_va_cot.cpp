#include<iostream>
using namespace std;
int a[3][4];
int main(){
	for (int i = 0; i<3 ; i++)
	{
		cout <<"\n ";
		for(int j = 0 ; j < 4 ; j ++)
		cout << "-->" <<&a[i][j];
	}
	cout <<"\n-------------------\n";
	for(int j = 0 ; j < 12 ; j++)
	cout << "--->"<<&a[0][j];
	
	
	
}
