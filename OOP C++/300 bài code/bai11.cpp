#include<stdio.h>

main()
{
    int a , b , min, max;
    scanf("%d%d", &a,&b);
    min = ( a < b ) ? a : b ;
    max = (a > b) ? a : b;
    printf ("Gia tri nho nhat la : %d", min);
    printf("Gia tri lon nhat la : %d", max);
    return 0;
}