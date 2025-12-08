#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
int main()
{
    int chon;
    do
    {
        printf("");
        //...
        printf("");
        scanf("%d", &chon);
        switch (chon)
        {
        case 1: // dùng if, else, for, công thức tính
        {
            double x;
            printf("x = ");
            scanf("%lf", &x);
            if (x == (int)x)
            {
                printf("%.2lf là số nguyên.\n", x); // Output 1
                int n = (int)x;
                int songuyento = 1;
                if (n < 2)
                {
                    songuyento = 0;
                }
                else
                {
                    for (int i = 2; i <= sqrt(n); i++)
                    {
                        if (n % i == 0)
                        {
                            songuyento = 0;
                            break;
                        }
                    }
                }
                if (songuyento == 1)
                {
                    printf("%d là số nguyên tố.\n", n); // Output 2
                }
                else
                {
                    printf("%d không phải là số nguyên tố.\n", n); // Output 2
                }
                int canbac2 = sqrt(n);
                if (pow(canbac2, 2) == n)
                {
                    printf("%d là số chính phương.\n", n); // Output 3
                }
                else
                {
                    printf("%d không phải là số chính phương. \n", n); // Output 3
                }
            }
            else
            {
                printf("%.2lf là số thập phân.\n", x); // Output 1
                printf("Không thực hiện các bước kiểm tra số nguyên tố và số chính phương.\n");
            }
            break;
        }
        case 2: // dùng if, while và công thức tính
        {
            int x, y;
            printf("x = ");
            scanf("%d", &x);
            printf("y = ");
            scanf("%d", &y);
            int a = x;
            int b = y;
            if (a < 0)
            {
                a = -a;
            }
            if (b < 0)
            {
                b = -b;
            }
            while (b != 0)
            {
                int temp = b;
                b = a % b;
                a = temp;
            }
            int ucln = a;
            int bcnn = 0;
            if (ucln != 0)
            {
                bcnn = (int)x * y / ucln;
                if (bcnn < 0)
                {
                    bcnn = -bcnn;
                }
                printf("UCLN = %d\n", ucln);
                printf("BCNN = %d\n", bcnn);
            }
            break;
        }
        case 3: // dùng do while
        {
            int time1, time2;
            do
            {
                printf("Bắt đầu: ");
                scanf("%d", &time1);
                printf("Kết thúc: ");
                scanf("%d", &time2);
                if (time1 < 12 || time1 > 23 || time2 < 12 || time2 > 23 || time1 >= time2)
                {
                    printf("Quán chỉ hoạt động từ 12h - 23h. Vui lòng nhập lại. \n");
                }
            } while (time1 < 12 || time1 > 23 || time2 < 12 || time2 > 23 || time1 >= time2);
            int sum_time = time2 - time1;
            float sum_money = 0;
            float cost = 150000;
            if (sum_time <= 3)
            {
                sum_money = sum_time * cost;
            }
            else
            {
                sum_money = 3 * cost + (sum_time - 3) * (cost * (1 - 0.3));
            }
            if (time1 >= 14 && time2 <= 17)
            {
                sum_money = cost * (1 - 0.1);
                printf("Giảm 10%% trong khung giờ vàng 14h - 17h.\n", sum_money);
            }
            printf("Tổng giờ hát karaoke là: %d tiếng.\n", sum_time);
            printf("Tồng tiền thanh toán là: %.0f VND.\n", sum_money);
            break;
        }
        case 4: // dùng if - else
        {
            const int lim1 = 50;
            const int lim2 = 100;
            const int lim3 = 200;
            const int lim4 = 300;
            const int lim5 = 400;
            const long lv1 = 1678;
            const long lv2 = 1734;
            const long lv3 = 2014;
            const long lv4 = 2536;
            const long lv5 = 2834;
            const long lv6 = 2937;
            float kwh;
            printf("Tiền điện sử dụng: ");
            scanf("%f", &kwh);
            float bill;
            if (kwh <= 50)
            {
                bill = kwh * lv1;
            }
            else if (kwh <= 100)
            {
                bill = lim1 * lv1 + (kwh - lim1) * lv2;
            }
            else if (kwh <= 200)
            {
                bill = lim1 * (lv1 + lv2) + (kwh - lim2) * lv3;
            }
            else if (kwh <= 300)
            {
                bill = lim1 * (lv1 + lv2) + lim2 * lv3 + (kwh - lim3) * lv4;
            }
            else if (kwh <= 400)
            {
                bill = lim1 * (lv1 + lv2) + lim2 * (lv3 + lv4) + (kwh - lim4) * lv5;
            }
            else
            {
                bill = lim1 * (lv1 + lv2) + lim2 * (lv3 + lv4 + lv5) + (kwh - lim5) * lv6;
            }
            printf("Hóa đơn thanh toán: %.0f\n", bill);
            break;
        }
        case 5: // Khai báo mảng
        {
            int money;
            printf("Số tiền cần đổi: ");
            scanf("%d", &money);
            int face_value[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
            for (int i = 0; i < 9; i++)
            {
                int count = money / face_value[i];
                if (count > 0)
                {
                    printf("%d tờ %d\n", count, face_value[i]);
                }
                money = money % face_value[i];
            }
            break;
        }
        case 6:
        {
            float tien_vay;
            printf("Số tiền vay: ");
            scanf("%f", &tien_vay);
            float lai_suat = 0.05;
            int ky_han = 12;
            float tien_goc_hang_thang = tien_vay / ky_han;
            float tien_goc_con_lai = tien_vay;
            for (int i = 1; i <= ky_han; i++)
            {
                float tien_lai = tien_goc_con_lai * lai_suat;
                float tong_tien = tien_goc_hang_thang + tien_lai;
                tien_goc_con_lai = tien_goc_con_lai - tien_goc_hang_thang;
                printf("Kỳ hạn: %d\n", i);
                printf("Tiền lãi: %.0f\n", tien_lai);
                printf("Tiền gốc hàng tháng: %.0f\n", tien_goc_hang_thang);
                printf("Tổng tiền: %.0f\n", tong_tien);
                printf("Tiền gốc còn lại: %.0f\n", tien_goc_con_lai);
                printf("\n");
            }
            break;
        }
        case 7:
        {
            float phan_tram_vay;
            printf("Phần trăm vay:");
            scanf("%d", &phan_tram_vay);
            float tien_vay;
            printf("Số tiền vay: ");
            scanf("%f", &tien_vay);
            float lai_suat_nam = 0.15;
            float lai_suat_thang = lai_suat_nam / 12;
            int nam = 24;
            float ky_han = nam * 12;
            float tien_goc_hang_thang = tien_vay / ky_han;
            float tien_goc_con_lai = tien_vay;
            for (int i = 1; i < ky_han; i++)
            {
                float tien_lai = tien_goc_con_lai * lai_suat_thang;
                float tong_tien = tien_goc_hang_thang + tien_lai;
                tien_goc_con_lai = tien_goc_con_lai - tien_goc_hang_thang;
                printf("Kỳ hạn: %d\n", i);
                printf("Tiền lãi: %.0f\n", tien_lai);
                printf("Tiền gốc hàng tháng: %.0f\n", tien_goc_hang_thang);
                printf("Tổng tiền: %.0f\n", tong_tien);
                printf("Tiền gốc còn lại: %.0f\n", tien_goc_con_lai);
                printf("\n");
            }
            break;
        }
        case 8:
        {
            int n;
            printf("Nhập số lượng sinh viên: ");
            scanf("%d", &n);
            char hoten[100][50];
            float diem[50];
            char hocluc[100][20];
            for (int i = 0; i < n; i++)
            {
                printf("STT: ", i + 1);
                printf("Họ tên: ");
                getchar();
                gets(hoten[i]);
                printf("Điểm: ");
                scanf("%f", &diem[i]);
                if (diem[i] >= 9)
                {
                    strcpy(hocluc[i], "Xuất sắc");
                }
                else if (diem[i] >= 8)
                {
                    strcpy(hocluc[i], "Giỏi");
                }
                else if (diem[i] >= 6.5)
                {
                    strcpy(hocluc[i], "Khá");
                }
                else if (diem[i] >= 5)
                {
                    strcpy(hocluc[i], "Trung bình");
                }
                else
                {
                    strcpy(hocluc[i], "Yếu");
                }
            }
            for (int i = 0; i < n - 1; i++)
            {
                for (int j = i + 1; j < n; j++)
                {
                    if (diem[i] < diem[j])
                    {
                        float temp_diem = diem[j];
                        diem[j] = diem[i];
                        diem[i] = temp_diem;
                    }
                    char temphoten[50];
                    {
                        strcpy(temphoten, hoten[i]);
                        strcpy(hoten[i], hoten[j]);
                        strcpy(hoten[j], temphoten);
                    }
                    char temphocluc[20];
                    {
                        strcpy(temphocluc, hocluc[i]);
                        strcpy(hocluc[i], hocluc[j]);
                        strcpy(hocluc[j], temphocluc);
                    }
                }
            }
            for (int i = 0; i < n; i++)
            {
                printf("Họ tên: %s\n", hoten[i]);
                printf("Điểm: %.2f\n", diem[i]);
                printf("Học lực: %s\n", hocluc[i]);
                printf("\n");
            }
            break;
        }
        case 9:
        {
            int n1, n2;
            do
            {
                printf("Nhập 2 số từ 1 - 15: ");
                scanf("%d %d", &n1, &n2);
                if (n1 < 1 || n1 > 15 || n2 < 1 || n2 > 15)
                {
                    printf("Báo lỗi! Nhập lại");
                }
            } while (n1 < 1 || n1 > 15 || n2 < 1 || n2 > 15);
            srand((int)time(0));
            int kq1 = rand() % 15 + 1;
            int kq2;
            do
            {
                kq2 = rand() % 15 + 1;
            } while (kq2 == kq1);
            printf("Kết quả xổ số: %02d - %02d\n", kq1, kq2);
            printf("Bạn đã chọn: %02d - %02d\n", n1, n2);
            int count = 0;
            if (n1 == kq1 || n2 == kq2)
            {
                count++;
            }
            if (n1 != n2)
            {
                if (n2 == kq1 || n1 == kq2)
                {
                    count++;
                }
            }
            if (count == 2)
            {
                printf("Chúc mừng!!! Bạn đã trúng giải nhất (Trúng cả 2 số) !\n");
            }
            else if (count == 1)
            {
                printf("Chức mừng!!! Bạn đã trúng giải nhì (Trúng 1 số) !\n");
            }
            else
            {
                printf("Chức bạn may mắn lần sau (Không trúng số nào) !");
            }
            break;
        }
        case 10:
        {
            struct phanso
            {
                int tu;
                int mau;
            };
            struct phanso ps1, ps2;
            printf("Phân số 1: ");
            scanf("%d %d", &ps1.tu, &ps1.mau);
            do
            {
                printf("Phân số 2: ");
                scanf("%d %d", &ps2.tu, &ps2.mau);
                if (ps1.mau == 0 || ps2.mau == 0)
                {
                    printf("Lỗi! Mẫu phải khác 0");
                }
            } while (ps1.mau == 0 || ps2.mau == 0);
            int a;
            int b;
            int ucln = 1;
            struct phanso tong;
            tong.tu = ps1.tu * ps2.mau + ps2.tu * ps1.mau;
            tong.mau = ps1.mau * ps2.mau;
            a = tong.tu;
            b = tong.mau;
            if (a > 0)
            {
                a = abs(a);
            }
            if (b > 0)
            {
                b = abs(b);
            }
            if (a == 0 && b == 0)
            {
                ucln = 1;
            }
            else if (a == 0)
            {
                ucln = a;
            }
            else if (b == 0)
            {
                ucln = b;
            }
            else
            {
                while (b != 0)
                {
                    int temp = b;
                    b = b % a;
                    a = temp;
                }
                ucln = a;
            }
            tong.tu = tong.tu / ucln;
            tong.mau = tong.mau / ucln;
            if (tong.mau < 0)
            {
                tong.tu = abs(tong.tu);
                tong.mau = abs(tong.mau);
            }
            printf("Tổng: %d/%d\n", tong.tu, tong.mau);
            struct phanso hieu;
            hieu.tu = ps1.tu * ps2.mau - ps2.tu * ps1.mau;
            hieu.mau = ps1.mau * ps2.mau;
            a = hieu.tu;
            b = hieu.mau;
            if (a > 0)
            {
                a = abs(a);
            }
            if (b > 0)
            {
                b = abs(b);
            }
            if (a == 0 && b == 0)
            {
                ucln = 1;
            }
            else if (a == 0)
            {
                ucln = a;
            }
            else if (b == 0)
            {
                ucln = b;
            }
            else
            {
                while (b != 0)
                {
                    int temp = b;
                    b = b % a;
                    a = temp;
                }
                ucln = a;
            }
            hieu.tu = hieu.tu / ucln;
            hieu.mau = hieu.mau / ucln;
            if (hieu.mau < 0)
            {
                hieu.tu = abs(hieu.tu);
                hieu.mau = abs(hieu.mau);
            }
            printf("Hiệu: %d/%d\n", hieu.tu, hieu.mau);
            struct phanso tich;
            tich.tu = ps1.tu * ps2.tu;
            tich.mau = ps1.mau * ps2.mau;
            a = tich.tu;
            b = tich.mau;
            if (a > 0)
            {
                a = abs(a);
            }
            if (b > 0)
            {
                b = abs(b);
            }
            if (a == 0 && b == 0)
            {
                ucln = 1;
            }
            else if (a == 0)
            {
                ucln = a;
            }
            else if (b == 0)
            {
                ucln = b;
            }
            else
            {
                while (b != 0)
                {
                    int temp = b;
                    b = b % a;
                    a = temp;
                }
                ucln = a;
            }
            tich.tu = tich.tu / ucln;
            tich.mau = tich.mau / ucln;
            if (tich.mau < 0)
            {
                tich.tu = abs(tich.tu);
                tich.mau = abs(tich.mau);
            }
            printf("Tích: %d/%d\n", tich.tu, tich.mau);
            struct phanso thuong;
            thuong.tu = ps1.tu * ps2.mau;
            thuong.mau = ps1.mau * ps1.tu;
            a = thuong.tu;
            b = thuong.mau;
            if (a > 0)
            {
                a = abs(a);
            }
            if (b > 0)
            {
                b = abs(b);
            }
            if (a == 0 && b == 0)
            {
                ucln = 1;
            }
            else if (a == 0)
            {
                ucln = a;
            }
            else if (b == 0)
            {
                ucln = b;
            }
            else
            {
                while (b != 0)
                {
                    int temp = b;
                    b = b % a;
                    a = temp;
                }
                ucln = a;
            }
            thuong.tu = thuong.tu / ucln;
            thuong.mau = thuong.mau / ucln;
            if (thuong.mau < 0)
            {
                thuong.tu = abs(thuong.tu);
                thuong.mau = abs(thuong.mau);
                printf("Thương: %d/%d\n", thuong.tu, thuong.mau);
            }
            else
            {
                printf("Không thể chia hết cho 0\n");
            }
            break;
        }
        case 0:
        {
            printf("Cảm ơn bạn và hẹn gặp lại!");
            exit(0);
            break;
        }
        default:
        {
            printf("Lỗi! Vui lòng chọn chức năng từ 1 - 10");
        }
        }
    } while (chon != 0);
    return 0;
}