#include <stdio.h>  // Thư viện chuẩn cho nhập xuất (printf, scanf)
#include <stdlib.h> // Thư viện cho hàm abs(), rand(), srand(), exit()
#include <math.h>   // Thư viện toán học sqrt(), pow()
#include <string.h> // Thư viện xử lí chuỗi cho strcpy(), gets()
#include <time.h>   // Thư viện thời gian để tạo hạt giống random
int main()          // Hàm chính bắt đầu chương trình
{
    int chon; // Khai báo biến số nguyên để lưu lựa chọn của người dùng
    do        // Bắt đầu vòng lặp do-while (chạy ít nhất 1 lần để hiện menu)
    {
        printf("|-------------------- GIAO DIỆN MENU --------------------|\n"); // In giao diện
        printf("|--------------------------------------------------------|\n"); // In đường viền trang trí
        printf("|Chào mừng bạn Huỳnh Trường Lộc đến với ASSIGNMENT COM108|\n"); // In lời chào cá nhân hóa
        printf("|--------------------------------------------------------|\n"); // In đường viền trang trí
        printf("|                  Chương trình tổng hợp                 |\n"); // In tiêu đề
        printf("|Chức năng 1: Kiểm tra số nguyên                         |\n"); // In tên chức năng 1
        printf("|Chức năng 2: Ước số và bội số chung của 2 số            |\n"); // In tên chức năng 2
        printf("|Chức năng 3: Tính tiên điện cho quán Karaoke            |\n"); // In tên chức năng 3
        printf("|Chức năng 4: Tính tiền điện                             |\n"); // In tên chức năng 4
        printf("|Chức năng 5: Chức năng đổi tiền                         |\n"); // In tên chức năng 5
        printf("|Chức năng 6: Tính lãi vay suất trả góp từ ngân hàng     |\n"); // In tên chức năng 6
        printf("|Chức năng 7: Vay tiền mua xe                            |\n"); // In tên chức năng 7
        printf("|Chức năng 8: Sắp xếp thông tin cá nhân                  |\n"); // In tên chức năng 8
        printf("|Chức năng 9: Xây dựng game FPOLT-LOTT                   |\n"); // In tên chức năng 9
        printf("|Chức năng 10: Tính toán phân số                         |\n"); // In tên chức năng 10
        printf("|Chức năng 0: Thoát                                      |\n"); // In chức năng thoát
        printf("|Vui lòng chọn chức năng:                                |\n"); // Nhắc người dùng nhập lựa chọn
        printf("|--------------------------------------------------------|\n"); // In đường viền trang trí
        scanf("%d", &chon);                                                     // Đọc số ngườu dùng nhập và lưu vào biến "chon"
        switch (chon)                                                           // Kiểm tra giá trị của biến "chon" để vào từng case tương ứng
        {
        case 1: // Chức năng 1: Kiểm tra số nguyên
        {
            double x;           // Khai báo biến x kiểu số thực (để kiểm tra nhập vào có phải là số nguyên không)
            printf("Nhập x: "); // In nhắc nhập x
            scanf("%lf", &x);   // Nhập số thực x từ bàn phím
            getchar();          // Xóa trôi lệnh
            printf("\n");
            if (x == (int)x) // Kiểm tra xem x có bằng phần nguyên của nó không
            {
                printf("%.0lf là số nguyên.\n", x); // Nếu đúng, in ra x là số nguyên
                int n = (int)x;                     // Ép kiểu x sang số nguyên n để tính toán tiếp
                printf("\n");
                int songuyento = 1; // Khởi tạo biến cờ hiệu: 1 là số nguyên tố, 0 là không phải là số nguyên tố
                if (n < 2)          // Nếu n nhỏ hơn 2
                {
                    songuyento = 0; // Không phải là số nguyên tố
                }
                else // Nếu n >= 2
                {
                    int limit = sqrt(n);             // Tính căn bậc 2 của n
                    for (int i = 2; i <= limit; i++) // Chạy vòng lặp từ 2 đến căn bậc 2 của n
                    {
                        if (n % i == 0) // Nếu n chia hết cho 1
                        {
                            songuyento = 0; // Đánh dấu không phải là số nguyên tố
                            break;          // Thoát vòng lặp ngay lập tức
                        }
                    }
                }
                if (songuyento == 1) // Kiểm tra cờ hiệu
                {
                    printf("%d là số nguyên tố.\n", n); // In kết quả là số nguyên tố
                }
                else
                {
                    printf("%d không phải là số nguyên tố.\n", n); // In kết quả không phải là số nguyên tố
                }
                printf("\n");
                int canbac2 = sqrt(n);      // Tính phần nguyên căn bậc 2 của n
                if (canbac2 * canbac2 == n) // Bình phương số đó lên xen có bằng n không
                {
                    printf("%d là số chính phương.\n", n); // In kết quả là số chính phương
                }
                else // Nếu bình phương số đó không bằng n
                {
                    printf("%d không phải là số chính phương.\n", n); // In kết quả là số chính phương
                }
                printf("\n"); // Cách dòng
            }
            else
            {
                printf("%.2lf là số thập phân.\n", x);                // In ra là số thập phân
                printf("Không thực hiện các bước kiểm tra khác. \n"); // Thông báo dừng kiểm tra
                printf("\n");                                         // Cách dòng
            }
            getchar();
            break; // Kết thúc case 1
        }
        case 2: // Chức năng 2: Ước chung lớn nhất và bội chung nhỏ nhất
        {
            int x, y;                // Khai báo 2 số nguyên
            printf("Nhập x và y: "); // Nhắc nhập x và y
            scanf("%d %d", &x, &y);  // Nhập x, y
            int a = x;               // Khai tạm biến a
            int b = y;               // Khai tạm biến b
            if (a < 0)               // Lấy giá trị tuyệt đối của a
            {
                a = -a;
            }
            if (b < 0) // Lấy giá trị tuyệt đối của b
            {
                b = -b;
            }
            printf("--- Thuật toán Euclid ---\n");
            while (b != 0) // Lặp lại cho đến khi b khác 0
            {
                int temp = b; // Lưu giá trị hiện tại của b vào biến tạm
                b = a % b;    // Gán b mới bằng phần dư của a chia b
                a = temp;     // Gán a bằng giá trị b cũ (lấy từ temp)
            }
            int ucln = a;  // Sau vòng lặp kết thúc, a chính là UCLN
            int bcnn = 0;  // Khai báo kiến BCNN
            if (ucln != 0) // Kiểm tra để tránh lỗi chia cho 0
            {
                bcnn = (int)x * y / ucln; // Công thức: BCNN = Tích / BCNN
                if (bcnn < 0)             // Nếu BCNN là số âm (x hoặc y âm)
                {
                    bcnn = -bcnn; // Đổi đấu thành dương
                }
                printf("UCLN = %d\n", ucln); // In kết quả UCLN
                printf("BCNN = %d\n", bcnn); // In kết quả BCNN
            }
            break; // Kết thúc case 2
        }
        case 3: // Chức năng 3: Tiền Karaoke
        {
            int time1, time2; // Giờ bắt đầu, giờ kết thúc
            do                // Vòng lặp kiểm tra tính hợp lệ của giờ nhập vào
            {
                printf("Bắt đầu: ");                                                        // Nhắc nhập giờ đầu
                scanf("%d", &time1);                                                        // Nhập giờ đầu
                printf("Kết thúc: ");                                                       // Nhắc nhập giờ cuói
                scanf("%d", &time2);                                                        // Nhập giờ cuối
                if (time1 < 12 || time1 > 23 || time2 < 12 || time2 > 23 || time1 >= time2) // Điều kiện
                {
                    printf("Quán chỉ hoạt động từ 12h - 23h. Vui lòng nhập lại.\n"); // In kết quả báo lỗi
                    printf("\n");                                                    // Cách dòng
                }
            } while (time1 < 12 || time1 > 23 || time2 < 12 || time2 > 23 || time1 >= time2); // Lặp lại nếu sai
            int sum_time = time2 - time1; // Tiền giờ hát
            float sum_money = 0;          // Tổng tiền
            float cost = 150000;          // Giá gốc 1 giờ
            printf("--- Tính tiền ---\n");
            if (sum_time <= 3) // Nếu hát dưới hoặc bằng 3 tiếng
            {
                sum_money = sum_time * cost; // Tính tiền bình thường
            }
            else // Nếu hát trên 3 tiếng + các tiếng sau giảm 30%
            {
                sum_money = 3 * cost + (sum_time - 3) * (cost * (1 - 0.3));
                printf("Giảm 30%% khi hát trên 3 tiếng\n");
            }
            if (time1 >= 14 && time2 <= 17) // Khuyến mãi từ 14h - 17h
            {
                sum_money = cost * (1 - 0.1);                                     // Giảm 10% tổng hóa đơn
                printf("Giảm 10%% trong khung giờ vàng 14h - 17h.\n", sum_money); // Thông báo giảm giá
            }
            printf("Tổng giờ hát karaoke là: %d tiếng.\n", sum_time);  // In tổng giờ
            printf("Tồng tiền thanh toán là: %.0f VND.\n", sum_money); // In tổng tiền (làm tròn số nguyên)
            getchar();                                                 // Xóa trôi lệnh
            break;                                                     // Kết thúc case 3
        }
        case 4: // Chức năng 4: Tính tiền điện
        {
            printf("|------------------- Bảng thông kê tiền điện --------------------|\n");
            const int lim1 = 50, lim2 = 100, lim3 = 200, lim4 = 300, lim5 = 400;
            printf("| Mốc tiêu thụ điện: %-4d | %-4d | %-4d | %-4d | %-4d | Trên 400 |\n", lim1, lim2, lim3, lim4, lim5);
            const long lv1 = 1678, lv2 = 1734, lv3 = 2014, lv4 = 2536, lv5 = 2834, lv6 = 2937;
            printf("| Giá tiền từng bậc: %-4ld | %-4ld | %-4ld | %-4ld | %-4ld | %-8ld |\n", lv1, lv2, lv3, lv4, lv5, lv6);
            printf("|----------------------------------------------------------------|\n");
            float kwh;                       // Biến lưu số điện tiêu thụ
            printf("  Tiền điện sử dụng: "); // Nhắc nhập
            scanf("%f", &kwh);               // Nhập số điện
            float bill;                      // Biến lưu hóa đơn
            // Tính tiền điện theo phương pháp lũy tiền (Bậc thang)
            if (kwh <= 50) // Bậc 1
            {
                bill = kwh * lv1;
            }
            else if (kwh <= 100) // Bậc 2
            {
                bill = lim1 * lv1 + (kwh - lim1) * lv2;
            }
            else if (kwh <= 200) // Bậc 3
            {
                bill = lim1 * (lv1 + lv2) + (kwh - lim2) * lv3;
            }
            else if (kwh <= 300) // Bậc 4
            {
                bill = lim1 * (lv1 + lv2) + lim2 * lv3 + (kwh - lim3) * lv4;
            }
            else if (kwh <= 400) // Bậc 5
            {
                bill = lim1 * (lv1 + lv2) + lim2 * (lv3 + lv4) + (kwh - lim4) * lv5;
            }
            else // Bậc 6 (trên 400kwh)
            {
                bill = lim1 * (lv1 + lv2) + lim2 * (lv3 + lv4 + lv5) + (kwh - lim5) * lv6;
            }
            printf("Hóa đơn thanh toán: %.0f\n", bill); // In hóa đơn
            printf("\n");
            getchar(); // Xóa trôi lệnh
            break;     // Kết thúc case 4
        }
        case 5: // Chức năng 5: Đổi tiền
        {
            int money;                   // Biến lưu số tiền cần đổi
            printf("Số tiền cần đổi: "); // Nhắc nhập
            scanf("%d", &money);         // Nhập số tiền
            // Mảng các mệnh giá tiền từ lớn đến nhỏ
            int face_value[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
            // Vòng lặp duyệt qua từng mệnh giá (0 loại mệnh giá)
            for (int i = 0; i < 9; i++)
            {
                int count = money / face_value[i]; // Tính số tờ mệnh giá hiện tại
                if (count > 0)                     // Nếu đổi được ít nhất 1 tờ
                {
                    printf("%d tờ %d\n", count, face_value[i]); // In ra số lượng và mệnh giá
                }
                money = money % face_value[i]; // Cập nhật số tiền dư còn lại cần đổi tiếp
            }
            getchar(); // Xóa trôi lệnh
            break;     // Kết thúc case 5
        }
        case 6: // Chức năng 6: Tính lãi suất trả góp
        {
            float tien_vay;                                // Biến tiền vay
            printf("Số tiền vay: ");                       // Nhắc nhập
            scanf("%f", &tien_vay);                        // Nhập tiền vay
            float lai_suat = 0.05;                         // Gán lãi suất cố định 5%
            int ky_han = 12;                               // Gán kỳ hạn 12 tháng
            float tien_goc_hang_thang = tien_vay / ky_han; // Tính gốc phải trả đều mỗi tháng
            float tien_goc_con_lai = tien_vay;             // Ban đầu gốc còn lại bằng tổng vay
            // Vòng lặp in bảng trả nợ cho 12 tháng
            printf("|       Kỳ hạn       |       Tiền lãi        |       Tiền gốc hàng tháng         |       Tổng tiền       |        Tiền gốc còn lại      |\n");
            for (int i = 1; i <= ky_han; i++)
            {
                float tien_lai = tien_goc_con_lai * lai_suat;              // Tính lãi suất này dựa trên dư nợ
                float tong_tien = tien_goc_hang_thang + tien_lai;          // Tổng phải trả tháng này
                tien_goc_con_lai = tien_goc_con_lai - tien_goc_hang_thang; // Trừ bớt gốc đã trả
                // In thông tin chi tiết từng tháng
                printf("| %-18d | %-21.0f | %-33.0f | %-21.0f | %-28.0f |", i, tien_lai, tien_goc_hang_thang, tong_tien, tien_goc_con_lai);
                printf("\n"); // Cách dòng
            }
            getchar(); // Xóa trôi lệnh
            break;     // Kết thúc case 6
        }
        case 7: // Chức năng 7: Vay tiền mua xe
        {
            float phan_tram_vay;         // Biến % vay tối đa
            printf("Phần trăm vay:");    // Nhắc nhập
            scanf("%f", &phan_tram_vay); // Nhập % vay
            float tien_vay;
            printf("Số tiền vay: ");                       // Biến tiền vay
            scanf("%f", &tien_vay);                        // Nhắc nhập
            float lai_suat_nam = 0.15;                     // Nhập tiền vay
            float lai_suat_thang = lai_suat_nam / 12;      // Lãi suất 15%/năm
            int nam = 24;                                  // Số năm vay
            float ky_han = nam * 12;                       // Tổng số tháng phải trả
            float tien_goc_hang_thang = tien_vay / ky_han; // Gốc chia đều cho tổng tháng
            float tien_goc_con_lai = tien_vay;             // Dư nợ ban đầu
            // Vòng lặp in bảng trả nợ cho 24 năm
            printf("|       Kỳ hạn       |       Tiền lãi        |       Tiền gốc hàng tháng         |       Tổng tiền       |        Tiền gốc còn lại      |\n");
            for (int i = 1; i < ky_han; i++)
            {
                float tien_lai = tien_goc_con_lai * lai_suat_thang;        // Tính lãi trên dư nợ
                float tong_tien = tien_goc_hang_thang + tien_lai;          // Tổng trả
                tien_goc_con_lai = tien_goc_con_lai - tien_goc_hang_thang; // Giảm dư nợ
                // In thông tin chi tiết từng tháng
                printf("| %-18d | %-21.0f | %-33.0f | %-21.0f | %-28.0f |", i, tien_lai, tien_goc_hang_thang, tong_tien, tien_goc_con_lai);
                printf("\n");
            }
            getchar(); // Xóa trôi lệnh
            break;     // Kết thúc case 7
        }
        case 8: // Chức năng 8: Quản lí sinh viên
        {
            int n;                               // Số lượng sinh viên
            printf("Nhập số lượng sinh viên: "); // nhắc nhập
            scanf("%d", &n);                     // nhập n
            char hoten[100][50];                 // Mảng 2 chiều lưu tên (tối đa 100 sinh viên, tên dài 50 ký tự)
            float diem[100];                     // Mảng lưu điểm
            char hocluc[100][20];                // Mảng 2 chiều xếp loại
            // Vòng lặp nhập dữ liệu
            for (int i = 0; i < n; i++)
            {
                printf("STT: %d\n", i + 1); // In số thứ tự tăng dần
                printf("Họ tên: ");         // In họ và tên
                getchar();                  // xóa trôi lệnh
                gets(hoten[i]);             // Nhập cả dòng họ tên có dấu cách
                printf("Điểm: ");           // In điểm
                scanf("%f", &diem[i]);      // Nhập điểm
                printf("\n");
                // Xếp loại
                if (diem[i] >= 9)
                {
                    strcpy(hocluc[i], "XUAT SAC");
                }
                else if (diem[i] >= 8)
                {
                    strcpy(hocluc[i], "GIOI");
                }
                else if (diem[i] >= 6.5)
                {
                    strcpy(hocluc[i], "KHA");
                }
                else if (diem[i] >= 5)
                {
                    strcpy(hocluc[i], "TRUNG BINH");
                }
                else
                {
                    strcpy(hocluc[i], "YEU");
                }
            }
            // Sắp xếp sinh viên bằng thuật tuấn Bubble Sort
            for (int i = 0; i < n - 1; i++) // Vòng lặp ngoài
            {
                for (int j = i + 1; j < n; j++) // Vòng lặp trong
                {
                    if (diem[i] < diem[j]) // Nếu điểm của người trước nhỏ hơn người đứng sau
                    {
                        // Hoán vị điểm
                        float temp_diem = diem[j];
                        diem[j] = diem[i];
                        diem[i] = temp_diem;
                        // Hoán vị tên
                        char temphoten[50];
                        strcpy(temphoten, hoten[i]);
                        strcpy(hoten[i], hoten[j]);
                        strcpy(hoten[j], temphoten);
                        // Hoán vị học lực
                        char temphocluc[20];
                        strcpy(temphocluc, hocluc[i]);
                        strcpy(hocluc[i], hocluc[j]);
                        strcpy(hocluc[j], temphocluc);
                    }
                }
            }
            // Xuất danh sách sau khi sắp xếp
            printf("| %-5s | %-24s | %-6s | %-12s |\n", "STT", "Ho va ten", "Diem", "Hoc luc");
            for (int i = 0; i < n; i++)
            {
                printf("| %-5d | %-24s | %-6.2f | %-12s |", i + 1, hoten[i], diem[i], hocluc[i]);
                printf("\n");
            }
            getchar(); // Xóa trôi lệnh
            break;     // Kết thúc case 8
        }
        case 9: // Chức năng 9: Game xổ số
        {
            srand((int)time(0));       // Khởi tạo bộ sinh số ngẫu nhiên theo thời gian thực
            int kq1 = rand() % 15 + 1; // Random số thứ 1 (từ 1 đến 15)
            int kq2;
            do
            {
                kq2 = rand() % 15 + 1; // Random số thứ 2
            } while (kq2 == kq1); // Đảm bảo 2 số kết quả không trùng nhau
            // printf("Đáp án: %d và %d\n", kq1, kq2);
            int n1, n2; // 2 số người chơi chọn
            do          // Vòng lặp yêu cầu nhập đúng
            {
                printf("Nhập 2 số từ 1 - 15: ");            // Nhắc nhập
                scanf("%d %d", &n1, &n2);                   // Nhập 2 số
                if (n1 < 1 || n1 > 15 || n2 < 1 || n2 > 15) // Nếu điều kiện sai
                {
                    printf("Báo lỗi! Nhập lại"); // Báo lỗi
                }
            } while (n1 < 1 || n1 > 15 || n2 < 1 || n2 > 15); // Lặp lại nếu sai
            printf("Kết quả xổ số: %02d - %02d\n", kq1, kq2); // In kết quẩ xổ số
            printf("Bạn đã chọn: %02d - %02d\n", n1, n2);     // In số bạn chọn
            int count = 0;                                    // Biến đếm số cặp trùng
            // Kiểm tra xem có số nào trúng không
            if (n1 == kq1 || n1 == kq2)
            {
                count++; // Nếu n1 trúng 1 trong 2 số kết quả thì tăng biến đếm
            }
            if (n2 == kq1 || n2 == kq2)
            {
                count++; // Nếu n2 trúng 1 trong 2 số kết quả thì tăng biến đếm
            }
            if (count == 2) // Nếu trúng cả 2
            {
                printf("Chúc mừng!!! Bạn đã trúng giải nhất (Trúng cả 2 số) !\n");
            }
            else if (count == 1) // Nếu trúng 1
            {
                printf("Chức mừng!!! Bạn đã trúng giải nhì (Trúng 1 số) !\n");
            }
            else // Không trúng
            {
                printf("Chức bạn may mắn lần sau (Không trúng số nào) !\n");
            }
            break;     // Kết thúc case 9
            getchar(); // Xóa trôi lệnh
        }
        case 10: // Chức năng 10: Tính toán phân số
        {
            struct phanso // Định nghĩa cấu trúc phân số
            {
                int tu;  // Tử số
                int mau; // Mẫu số
            };
            struct phanso ps1, ps2;            // Khai báo 2 phân số
            printf("Phân số 1: ");             // Nhắc nhập
            scanf("%d %d", &ps1.tu, &ps1.mau); // Nhập phân số 1
            do                                 // Vòng lặp nhập phân số 2 (mẫu phải khác 0)
            {
                printf("Phân số 2: ");             // Nhắc nhập
                scanf("%d %d", &ps2.tu, &ps2.mau); // Nhập phân số 2
                if (ps1.mau == 0 || ps2.mau == 0)  // Nếu 1 trong 2 phân số có mẫu khác 0
                {
                    printf("Lỗi! Mẫu phải khác 0"); // Báo lỗi
                }
            } while (ps1.mau == 0 || ps2.mau == 0); // Lặp lại nếu sai
            int a;                                         // Gán biến a
            int b;                                         // Gán biên b
            int ucln = 1;                                  // Gán biến UCLN
            struct phanso tong;                            // Biến lưu tổng
            tong.tu = ps1.tu * ps2.mau + ps2.tu * ps1.mau; // Quy đồng tử
            tong.mau = ps1.mau * ps2.mau;                  // Mẫu chung
            // Rút gọn tổng
            a = abs(tong.tu);  // Lấy giá trị tuyệt đối tử để tìm UCLN
            b = abs(tong.mau); // Lấy giá trị tuyệt đối mẫu
            if (a == 0 || b == 0)
            {
                ucln = (a + b);
            }
            else
            {
                while (b != 0)
                {
                    int temp = b;
                    b = a % b;
                    a = temp;
                }
                ucln = a;
            }
            // Thuật toán Euclid
            tong.tu /= ucln;  // Chia tử cho UCLN
            tong.mau /= ucln; // Chia mẫu cho UCLN
            // Xử lý dấu (đưa dấu âm lên tử)
            if (tong.mau < 0)
            {
                tong.tu = -tong.tu;
                tong.mau = -tong.mau;
            }
            printf("Tổng: %d/%d\n", tong.tu, tong.mau);    // In kết quả tổng
            struct phanso hieu;                            // Biến lưu hiệu
            hieu.tu = ps1.tu * ps2.mau - ps2.tu * ps1.mau; // Quy đồng tử
            hieu.mau = ps1.mau * ps2.mau;                  // Mẫu chung
            // Rút gọn hiệu
            a = abs(hieu.tu);  // Lấy giá trị tuyệt đối để tìm UCLN
            b = abs(hieu.mau); // Lấy giá trị tuyệt đối mẫu
            if (a == 0 || b == 0)
            {
                ucln = (a + b);
            }
            else
            {
                while (b != 0)
                {
                    int temp = b;
                    b = a % b;
                    a = temp;
                }
                ucln = a;
            } // Thuật toán Euclid
            hieu.tu /= ucln;  // Chia tử cho UCLN
            hieu.mau /= ucln; // Chia mẫu cho UCLN
            // Xử lý dấu (đưa dấu âm lên tử)
            if (hieu.mau < 0)
            {
                hieu.tu = -hieu.tu;
                hieu.mau = -hieu.mau;
            }
            printf("Hiệu: %d/%d\n", hieu.tu, hieu.mau); // In kết quả hiệu
            struct phanso tich;                         // Biến lưu tích
            tich.tu = ps1.tu * ps2.tu;                  // Tử chung
            tich.mau = ps1.mau * ps2.mau;               // Mẫu chung
            // Rút gọn tích
            a = abs(tich.tu);
            b = abs(tich.mau);
            if (a == 0 || b == 0)
            {
                ucln = (a + b);
            }
            else
            {
                while (b != 0)
                {
                    int temp = b;
                    b = a % b;
                    a = temp;
                }
                ucln = a;
            } // Thuật toán Euclid
            tich.tu /= ucln;
            tich.mau /= ucln;
            // Xử lý dấu (đưa dấu âm lên tử)
            if (tich.mau < 0)
            {
                tich.tu = -tich.tu;
                tich.mau = -tich.mau;
            }
            printf("Tích: %d/%d\n", tich.tu, tich.mau); // In kết quả tích
            struct phanso thuong;                       // Biến lưu thương
            if (ps2.tu == 0)
            { // Kiểm tra nếu tử số của phân số 2 bằng 0
                printf("Không thể chia hết cho 0.\n");
            }
            else
            {
                struct phanso thuong;
                thuong.tu = ps1.tu * ps2.mau;  // Nhân chéo
                thuong.mau = ps2.tu * ps1.mau; // Nhân chéo
                                               // Rút gọn thương
                a = abs(thuong.tu);
                b = abs(thuong.mau);
                if (a == 0 || b == 0)
                {
                    ucln = (a + b);
                }
                else
                {
                    while (b != 0)
                    {
                        int temp = b;
                        b = a % b;
                        a = temp;
                    }
                    ucln = a;
                } // Thuật toán Euclid
                thuong.tu /= ucln;
                thuong.mau /= ucln;
                // Xử lý dấu (đưa dấu âm lên tử)
                if (thuong.mau < 0)
                {
                    thuong.tu = -thuong.tu;
                    thuong.mau = -thuong.mau;
                }
                printf("Thương: %d/%d\n", thuong.tu, thuong.mau); // In kết quả thương
            }
            getchar(); // Xóa trôi lệnh
            break;     // Kết thúc case 10
        }
        case 0: // Thoát
        {
            printf("Cảm ơn bạn và hẹn gặp lại!"); // Chào tạm biệt
            exit(0);                              // Thoát chương trình
            break;
        }
        default: // Nếu nhập số không có trong menu
        {
            printf("Lỗi! Vui lòng chọn chức năng từ 1 - 10");
        }
        } // Kết thúc switch
    } while (chon != 0); // Điều kiện lặp: nếu chọn khác 0 thì quay lại menu
    return 0; // Kết thúc hàm main
}