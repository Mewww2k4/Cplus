#include<stdio.h>
#include<string.h>

int i,n, n2 = 0 ,n3 = 0;
int a[100], b[100], c[100];

void NhapMang()
{
	printf("n = ");
	scanf("%d",&n);
	for (i = 0; i< n; i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
}
void XuatMang()
{
	for(i = 0 ; i < n ; i++)
	{
		printf("%d  ", a[i]);
	}
}
void Tach()
{
	for (i = 0 ; i<n; i++)
	{
		if(a[i]%2==0)
		b[n2++]=a[i];
		if(a[i]%2!=0)
		c[n3++]=a[i];
	}
	for(i=0;i<n;i++)
	printf("%d",b[i]);

int main()
{

	NhapMang();
	XuatMang();
	Tach();


}
