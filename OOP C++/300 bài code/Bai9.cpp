#include <stdio.h>
#include <math.h>
int main()
{
    double angle;
    printf("Nhap so do x cua goc (phut): ");
    scanf("%lf", &angle);
    angle /= 60; /* đổi phút thành độ */
    printf("x thuoc goc vuong thu %d\n", (int)ceil(angle / 90) % 4);
    printf("cos(x) = %g\n", cos(angle * M_PI / 180));
    return 0;
}
