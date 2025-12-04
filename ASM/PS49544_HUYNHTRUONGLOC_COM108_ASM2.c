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