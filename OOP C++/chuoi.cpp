//Nhap ho ten, nam sinh, que quan:
#include<iostream>	


#include<string.h>
using namespace std;
struct infor {
	char *ten, *quequan;
	int ns;
};
void input(infor &a)
{
	char t[100];
	cout << "Nhap ho ten : "; 
	fflush(stdin); 
    gets(t);
    a.ten = new char[strlen(t)];
    strcpy(a.ten,t);
	cout << "Nhap que quan : "; 
	fflush(stdin); 
	gets(t);
	a.quequan = new char[strlen(t)];
    strcpy(a.quequan,t);
	cout << "Nhap nam sinh : "; 
	cin >> a.ns;
}

void output(infor  x)
{

	cout <<"\nTen :" << x.ten << "\nQue Quan : " << x.quequan << "\nNam sinh: " << x.ns;
}
int cmpQue(infor a, infor b )
{
	if(strcmp(a.quequan, b.quequan)==0)
	return 1;
	else return 0;
}
int main()
{
	infor a, b;
	input(a);
	input(b);
	output(a);
	output(b);
	if(cmpQue(a,b))
	cout <<"\nHai nguoi cung que ";
	else cout <<"\n2 nguoi khong cung que ";
}
