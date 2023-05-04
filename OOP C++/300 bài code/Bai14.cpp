#include<stdio.h>

#include<conio.h>

int a = 41  , t[][3] =
{
        {25, 30, 40 },
        {145 , 83, 10}
};
float y[8] = {-45.8, 32.5};
float x[10][2] = 
                 {
                    {-125.3, 48.9},
                    {145.6, 83.5}
                 };
char n1[] = {'T','h','u','\0'};
char n2[] = "Thu";
char n3[10] = {'T','h','u','\0'};
char n4[10] = "Thu";
int main ()
{
    printf("\n a= %d, t(1,2) = %d , t(1,1) = %d ", a , t[1][2], t[1][1]);
    printf("\n x(1,1) = %0.2f, x (2, 0) = %0.2f ", x[1][1], x[2][0]);
    printf("\n%s%8s%8s%8s",n1,n2, n3, n4);
    getch();
}