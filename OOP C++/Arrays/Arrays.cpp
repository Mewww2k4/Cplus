#include <stdio.h>

void XapXepMang(int a[], int n) {
    int tg;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
        }
    }
}
void ThemPhanTu(int a[], int& n, int index, int giatri) {
    if (index <= 0) {
        index = 0;
    }
    if (index >= n) {
        index = n;
    }
    for (int i = n; i > index; i--) {
        a[i] = a[i - 1];
    }
    a[index] = giatri;
    n++;
}

void Nhap(int a[], int n) {
    for (int i = 0; i < n; ++i) {
        printf("nhap phan tu thu %d = ", i);
        scanf("%d", &a[i]);
    }
}

void Xuat(int a[], int n) {
    for (int i = 0; i < n; ++i) {
        printf(" %d  ", a[i]);
    }
    printf("\n");
}

int main() {
    int n; int a[100];
    printf("nhap n:");
    scanf("%d", &n);
    Nhap(a, n);
    printf("mang da nhap:");
    Xuat(a, n);
    XapXepMang(a, n);
    printf("them phan tu tại vị tri 2 = 4");
    ThemPhanTu(a, n, 2, 4);
    printf("ket qua :\n");
    Xuat(a, n);
}