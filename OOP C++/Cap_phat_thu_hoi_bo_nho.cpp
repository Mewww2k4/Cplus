#include<iostream>
using namespace std;

int main()
{
	int *a;
	int i = 0;
	while (1){
		a = new int [1000000];
		if(a!=NULL)
		{
			cout << "\n Cap phat thanh cong lan thu " << ++i;
			delete[]a;
		}
		else {
			cout <<"\n HET BO NHO !!!\n" ;
			break;
		}
	}
}
