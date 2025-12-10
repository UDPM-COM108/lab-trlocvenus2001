// #Bai 1: Xây dựng kiểu cấu trúc NhanVien bao gồm MANV, HoTen, SoNgayCong, Luong
// Input: Nhap 5 Nhan Vien: MANV, HoTen,SoNgayCong
// Output: Xuat thong tin 5 nhan vien đó: MANV, HoTen, SoNgayCong, Luong
// Lưu ý: LuongCB = 1.500.000
// SoNgayCong quy dinh 25
// Neu Nhan vien làm thiếu SoNgayCong trừ 10%
// Nếu Nhan Vien làm dư SoNgayCong thì 1 SoNgayCong dư tính nhân 2
// #Bai 2: Sap xếp bảng thông tin Nhân viên theo thứ tự tăng dần
// Output: Danh sách Nhân Viên:
// MANV HoTen SoNgayCong Luong
#include <stdio.h>
#include <string.h>
#define LUONG_COBAN 1500000.0
#define SONGAYCONG_QUYDINH 25
struct nhanvien
{
    int manv;
    char hoten[50];
    int songaycong;
    float luong;
};
void nhapthongtinnhanvien(struct nhanvien x[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Nhập số thứ tự nhân viên %d:\n", i + 1);
        printf("Mã số nhân viên: ");
        scanf("%d", &x[i].manv);
        getchar();
        printf("Họ tên: ");
        gets(x[i].hoten);
        printf("Số ngày công: ");
        scanf("%d", &x[i].songaycong);
    }
}
void inthongtinnhanvien(struct nhanvien x[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Mã số nhân viên: %-10d, Họ và tên: %-20s, Số ngày công: %-15d\n, Lương: %-15.0f\n", x[i].manv, x[i].hoten, x[i].songaycong, x[i].luong);
    }
}
void tinhluongnhanvien(struct nhanvien x[], int n)
{
    for (int i = 0; i < n; i++)
    {
        float luong1ngay = LUONG_COBAN / SONGAYCONG_QUYDINH;
        float luongthucte = x[i].songaycong * luong1ngay;

        if (x[i].songaycong < SONGAYCONG_QUYDINH)
        {
            x[i].luong = luongthucte * (1 - 0.1);
        }
        else if (x[i].songaycong > SONGAYCONG_QUYDINH)
        {
            int ngaydu = x[i].songaycong - SONGAYCONG_QUYDINH;
            x[i].luong = LUONG_COBAN + (luong1ngay * ngaydu * 2);
        }
        else
        {
            x[i].luong = LUONG_COBAN;
        }
    }
}
void swapluongnhanvien(struct nhanvien *x, struct nhanvien *y)
{
    struct nhanvien temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void sapxepluongnhanvien(struct nhanvien x[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (x[i].luong > x[j].luong)
            {
                swapluongnhanvien(&x[i], &x[j]);
            }
        }
    }
}
int main()
{
    int slnv;
    struct nhanvien congty[100];
    printf("Số lượng nhân viên: ");
    scanf("%d", &slnv);
    nhapthongtinnhanvien(congty, slnv);
    tinhluongnhanvien(congty, slnv);
    sapxepluongnhanvien(congty, slnv);
    printf("Danh sách sắp xếp theo tăng dần\n");
    printf("\n");
    inthongtinnhanvien(congty, slnv);
    return 0;
}