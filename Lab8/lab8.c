
/*// Bài mẫu: Khai báo thông tin sinh viên
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct sinhvien
{
    int mssv;
    char hoten[50];
    float diem;
};
int main()
{
    struct sinhvien SV1, SV2;
    printf("MSSV 1: ");
    getchar();
    scanf("%d", &SV1.mssv);
    printf("Ho va ten 1: ");
    scanf("%s", &SV1.hoten);
    gets(SV1.hoten);
    printf("Diem: ");
    scanf("%f", &SV1.diem);
    printf("\nMSSV: %d - Hoten: %s - Diem: %f", SV1.diem, SV1.hoten, SV1.diem);
}
*/

/*Bài mẫu: Khai báo thông tin của nhân viên
#include <stdio.h>
#include <string.h>

struct NhanVien
{
    char hoten[50];
    char ngaysinh[20];
    int songaycong;
};

int main()
{
    struct NhanVien nv;
    printf("Nhap ho ten: ");
    gets(nv.hoten);
    printf("Nhap ngay sinh (dd/mm/yyyy): ");
    gets(nv.ngaysinh);
    printf("Nhap so ngay cong: ");
    scanf("%d", &nv.songaycong);
    printf("Ho ten: %s - Ngay sinh: %s - So ngay cong %d", nv.hoten, nv.ngaysinh, nv.songaycong);
    return 0;
}*/
/*// Bài mẫu: Xây dựng chương trình danh sách điểm trung bình của sinh viên
#include <stdio.h>
#include <string.h>

struct SinhVien
{
    char hoten[50];
    float toan, ly, hoa;
    float dtb;
};

void NhapThongTin(struct SinhVien *sv)
{
    printf("Nhap ho ten: ");
    gets(sv->hoten);
    printf("Nhap diem Toan: ");
    scanf("%f", &sv->toan);
    printf("Nhap diem Ly: ");
    scanf("%f", &sv->ly);
    printf("Nhap diem Hoa: ");
    scanf("%f", &sv->hoa);
}
float dtb(float t, float l, float h)
{
    return (t + l + h) / 3;
}
void xeploai(float dtb)
{
    printf("Xep loai: ");
    if (dtb >= 8.0)
    {
        printf("GIOI");
    }
    else if (dtb >= 6.5)
    {
        printf("KHA");
    }
    else if (dtb >= 5.0)
    {
        printf("TRUNG BINH");
    }
    else
    {
        printf("YEU");
    }
}

int main()
{
    struct SinhVien sv1;
    NhapThongTin(&sv1);
    sv1.dtb = dtb(sv1.toan, sv1.ly, sv1.hoa);
    printf("Sinh vien: %s\n", sv1.hoten);
    printf("Diem TB: %.2f\n", sv1.dtb);
    xeploai(sv1.dtb);
    return 0;
}
*/

/*Bài mẫu: Khai báo thông tinh sinh viên
#include <stdio.h>

    struct sinhvien
    {
        int masv;
        char ten[20];
        struct date
        {
            int ngay;
            int thang;
            int nam;
        } ngaysinh;
    } sv1;
    sv1.masv = 101;
    strcpy(sv1.ten, "phong tran"); // chuyển đổi chuỗi thành mảng char
    sv1.ngaysinh.ngay = 10;
    sv1.ngaysinh.thang = 11;
    sv1.ngaysinh.nam = 1998;
    // hiển thị thông tin sinh viên ra màn hình
    printf("Ma so sinh vien: %d\n", sv1.masv);
    printf("ten sinh vien: %s\n, sv1.ten");
    printf("ngay sinh (dd/mm/yyyy): %d/%d/%d\n", sv1.ngaysinh.ngay, sv1.ngaysinh.thang, sv1.ngaysinh.nam);
*/

// Bài hoàn chỉnh: Xây dựng chương trinh sinh viên bao gồm thông tin sinh viên, xếp loại học lực
#include <stdio.h>
#include <string.h>

struct sinhvien
{
    int mssv;
    char hoten[50];
    float diem;
    char hocluc[20];
};
void inputstructsinhvien(struct sinhvien x[], int n)
{
    int i;
    for (int i = 0; i < n; i++)
    {
        printf("Mã số sinh viên: ");
        scanf("%d", &x[i].mssv);
        getchar();
        printf("Họ và tên: ");
        scanf("%s", x[i].hoten);
        printf("Điểm: ");
        scanf("%f", &x[i].diem);
        printf("\n");
    }
}
void printstructsinhvien(struct sinhvien x[], int n)
{
    int i;
    printf("Mã số sinh viên: \n");
    printf("Họ và tên: \n");
    printf("Điểm: \n");
    printf("Học lực: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%-10d", x[i].mssv);
        printf("%-20s", x[i].hoten);
        printf("%-10.1f", x[i].diem);
        if (x[i].hocluc != NULL)
        {
            printf("%-15s", x[i].hocluc);
        }
        else
        {
            printf(" \n");
        }
    }
}
void xeploaistructsinhvien(struct sinhvien x[], int n)
{
    int i;
    for (int i = 0; i < n; i++)
    {
        if (x[i].diem > 9)
        {
            strcpy(x[i].hocluc, "Xuất sắc\n");
        }
        else if (x[i].diem > 8)
        {
            strcpy(x[i].hocluc, "Giỏi\n");
        }
        else if (x[i].diem > 6.5)
        {
            strcpy(x[i].hocluc, "Khá\n");
        }
        else if (x[i].diem > 5)
        {
            strcpy(x[i].hocluc, "Trung bình\n");
        }
        else if (x[i].diem > 3.5)
        {
            strcpy(x[i].hocluc, "Yếu\n");
        }
        else
        {
            strcpy(x[i].hocluc, "Kém - Lưu ban\n");
        }
    }
}
void swapstructsinhvien(struct sinhvien *x, struct sinhvien *y)
{
    struct sinhvien temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void sortstructsinhvien(struct sinhvien x[], int n)
{
    int i, j;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (x[i].diem > x[j].diem)
            {
                swapstructsinhvien(&x[i], &x[j]);
            }
        }
    }
}
int main()
{
    int slsv;
    struct sinhvien SD21303[31];
    printf("Số lượng sinh viên: ");
    scanf("%d", &slsv);
    inputstructsinhvien(SD21303, slsv);
    xeploaistructsinhvien(SD21303, slsv);
    sortstructsinhvien(SD21303, slsv);
    printf("Danh sách đã sắp xếp\n");
    printstructsinhvien(SD21303, slsv);
    return 0;
}