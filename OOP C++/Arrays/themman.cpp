#include<stdio.h>
#include<math.h>
void nhap(int a[], int &n)
{
	for(int i = 0 ; i < n ; i++)
	{
		printf("Nhap a[%d] = ",i );
		scanf("%d", &a[i]);
	}
}
void xuat(int a[], int n)
{
	for(int i = 0; i< n; i++)
	{
		printf("%d   ", a[i]);
	}
}
void DaoMang( int a[], int n )
{
	int a1[100] ;
	for (int i = 0 ; i < n ; i++)
	{
		a1[i]= a[n - i - 1] ;
	 } 
	 printf("\nMang sau khi dao nguoc : "); 
	 for (int i = 0 ; i < n  ; i++) 
	 printf("%d  ", a1[i]); 
 } 
 void Tang(int a[], int n)
 {
 	printf("\nMang tang dan :");
	 for( int i = 0 ; i < n - 1 ; i++){
	 	for(int j = i + 1; j < n ; j++)
	 	{
	 		if(a[i]>a[j])
			 {
			 	int temp = a[i];
				 a[i]= a[j];
				 a[j]= temp; 
			  } 
		 }
	 } 
  } 
  void Giam(int a[], int n)
 {
 	printf("\nMang giam dan :");
	 for( int i = 0 ; i < n - 1 ; i++){
	 	for(int j = i + 1; j < n ; j++)
	 	{
	 		if(a[i]<a[j])
			 {
			 	int temp = a[i];
				 a[i]= a[j];
				 a[j]= temp; 
			  } 
		 }
	 } 
  } 
int TongChan(int a[], int n)
{
	int sum = 0;
	for(int i = 0; i < n ; i++)
	{
		if(a[i]%2==0)
		sum+=a[i];
	}
	printf("\nTong cac so chan co trong mang : %d ", sum);
	return sum;
}
int TimKiem(int a[], int n)
{
	int c;
	printf("\nNhap so can tim : ");
	scanf("%d",&c);
	for(int i = 0; i < n; i++)
	{
		if(a[i]==c)
		{
			printf("Tim thay %d o vi tri %d",c,i);
			break;
		}
   }
}
bool SoNto(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

// Hàm ð?m s? lý?ng nguyên t? trong m?ng
int DemSNT(int a[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (SoNto(a[i])) {
            count++;
        }
    }
    return count;
}
void them(int a[], int &n , int vt, int x)
{

	if(vt>=0 && vt<=n)
	
	{
		for(int i = n  ; i >= vt ; i--)
		
			a[i]=a[i-1];
		
		a[vt]=x;
		n++;
		
	}
}
void xoa(int a[], int &n , int vtx)
{
	if(vtx>=0&&vtx<=n)
	{
		for(int i = vtx; i< n-1; i++)
		a[i]=a[i+1];
	n--;
	}
}
int main(){
	int a[100],b[100],c[100];
	int n;
	printf("Nhap n = ");
	scanf("%d",&n);
	nhap(a,n);
	
	printf("\nMang sau khi nhap : ");
	xuat(a,n);

	  int k = DemSNT(a, n);
    printf("So luongng nguyen to trong mang la: %d\n", k);
	
	DaoMang(a,n); 
	
	TongChan(a,n);
	TimKiem(a,n);
	
	Tang(a,n);
	xuat(a,n);
	Giam(a,n);
	xuat(a,n); 
	
	int vt;
	printf("\nNhap vi tri them : "); scanf("%d",&vt);
	int x;
	printf("Nhap so can them : "); scanf("%d",&x);
	
	them(a,n,vt,x);
	printf("\nMang sau khi them : ");
	xuat(a,n);
	
	
	 
	int vtx;
	printf("\nnhap vi tri xoa : ");
	scanf("%d",&vtx);
	xoa(a,n,vtx);
	printf("\n Mang sau khi xoa : ");
	xuat(a,n);


}
