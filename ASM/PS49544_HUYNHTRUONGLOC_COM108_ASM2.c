#include <stdio.h>
#include <stdlib.h>
#include <math.h>
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
        case 1:
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
        case 2:
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
        case 3:
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
        case 4:
        {
            float kwh;
            do
            {
                printf("Tiền điện sử dụng: ");
                scanf("%f", &kwh);
                if (kwh < 0)
                {
                    printf("Lỗi. Nhập lại.\n");
                }
            } while (kwh < 0);
            float bill;
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
            printf("Hóa đơn thanh toán: %f\n", bill);
            break;
        }
        case 5:
        {
            break;
        }
        case 6:
        {
            break;
        }
        case 7:
        {
            break;
        }
        case 8:
        {
            break;
        }
        case 9:
        {
            break;
        }
        case 10:
        {
            break;
        }
        case 0:
        {
            break;
        }
        default:
            printf("");
        }
    } while (chon != 0);
    return 0;
}