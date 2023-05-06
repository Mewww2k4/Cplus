#include <stdio.h>
struct SinhVienDTU
{
    char maSV[5];
    char hoVaTen[50];
    char gioiTinh[5];
    int tuoi;
} SV;
void Nhap(SinhVienDTU &sv)
{
    printf("Nhap thong tin sinh vien \n");
    printf("Ma sinh vien: ");
    fflush(stdin);
    gets(sv.maSV);
    printf("Ho va ten: ");
    gets(sv.hoVaTen);
    printf("Gioi tinh: ");
    gets(sv.gioiTinh);
    printf("Tuoi: ");
    scanf("%d", &sv.tuoi);
}
void NhapDSSV(SinhVienDTU sv[], int &x) // dung lai ham Nhap 1 SV
{
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &x);
    for (int i = 0; i < x; i++)
        Nhap(sv[i]);
}
void NhapnSV(SinhVienDTU sv[], int &x) // kieu cu
{
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &x);
    for (int i = 0; i < x; i++)
    {
        printf("Nhap thong tin sinh vien \n");
        printf("Ma sinh vien: ");
        fflush(stdin);
        gets(sv[i].maSV);
        printf("Ho va ten: ");
        gets(sv[i].hoVaTen);
        printf("Gioi tinh: ");
        gets(sv[i].gioiTinh);
        printf("Tuoi: ");
        scanf("%d", &sv[i].tuoi);
    }
}
void Xuat(SinhVienDTU sv)
{
    printf("Thong tin sinh vien \n");
    printf("Ma sinh vien: %s \t", sv.maSV);
    printf("Ho va ten: %s \t ", sv.hoVaTen);
    printf("Gioi tinh: %s \t", sv.gioiTinh);
    printf("Tuoi: %d \n", sv.tuoi);
}
void XuatDSSV(SinhVienDTU sv[], int x)
{
    for (int i = 0; i < x; i++)
    {
        printf("Sinh vien %d ", x);
        Xuat(sv[i]);
    }
}

int main()
{
    struct SinhVienDTU sinhVien, mangSinhVien[100];
    int n;
    // Nhap(sinhVien);
    // Xuat(sinhVien);
    NhapDSSV(mangSinhVien, n);
    XuatDSSV(mangSinhVien, n);
}