#include<stdio.h>


void NhapMang(int a[100], int *n)
{
	for( int i = 0 ; i < *n ; i ++)
	{
	printf("a[%d] = ",i);
	scanf("%d ",&a[i]);
    }
}
void XuatMang(int a[], int n)
{
	
}
int main()
{
	int n;
	int a[100];
	printf("Nhap so luong phan tu");
	scanf("%d",&n);
	NhapMang(a,&n);
}
