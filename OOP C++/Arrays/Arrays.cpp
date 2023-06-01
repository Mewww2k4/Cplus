#include <stdio.h>

void XapXepMangTang(int a[], int n) { // mang tang
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
void XapXepMangGiam(int a[], int n) { // mang tang
    int tg;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] < a[j]) {
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
int TimkiemX(int arr[], int size, int x) {
  
    for (int i = 0; i < size; i++) {
        if (arr[i] == x) {
            return i; // Trả về vị trí của phần tử x trong mảng
        }
    }
    return -1; // Trả về -1 nếu không tìm thấy phần tử x trong mảng
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


    printf("mang tang : ");
    XapXepMangTang(a, n);
    Xuat(a, n);

    printf("mang giam : ");
    XapXepMangGiam(a,n);
    Xuat(a, n);

    int size = sizeof(a) / sizeof(a[0]);
    int x ;
    printf("Nhap x");
    scanf("%d", &x);
    int result = TimkiemX(a, size, x);

    if (result == -1) {
        printf("Phan tu %d khong ton tai trong mang.\n", x);
    } else {
        printf("Phan tu %d duoc tim thay tai vi tri %d trong mang.\n", x, result);
    }

    
    // printf("them phan tu tại vị tri 2 = 4");
    // ThemPhanTu(a, n, 2, 4);
    // printf("ket qua :\n");
    // Xuat(a, n);
}