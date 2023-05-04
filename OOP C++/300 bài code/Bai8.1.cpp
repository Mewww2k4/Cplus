#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c;
    printf("Nhap a, b, c: ");
    scanf("%f%f%f", &a, &b, &c);
    if (!a)
        if (!b)
            printf(c ? "Vo nghiem\n" : "Vo dinh\n");
        else
            printf("x = %g\n", -c / b);
    else
    {
        float d = b * b - 4 * a * c;
        if (d > 0)
            printf("x1 = %g\nx2 = %g\n", (-b + sqrt(d)) / (2 * a),
                   (-b - sqrt(d)) / (2 * a));
        else
            (!d) ? printf("x1 = x2 = %g\n", -b / (2 * a))
                 : printf("Vo nghiem\n");
    }
    return 0;
}
