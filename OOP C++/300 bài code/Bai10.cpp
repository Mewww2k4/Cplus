#include<stdio.h>

int main ()
{
    int n, n1, n2, n3, n4, sonut;
    printf("Nhap vao 4 so xe : ");
    scanf("%d", &n);
    n4=n%10; n=n/10;
    n3=n%10; n=n/10;
    n2=n%10; n=n/10;
    n1=n;
    sonut=(n1+n2+n3+n4)%10;
    printf(" So nut la : %d", sonut);
}