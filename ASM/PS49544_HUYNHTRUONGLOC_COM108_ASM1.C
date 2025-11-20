    #include <stdio.h>
    #include <conio.h> // Tạo getch() dừng màn hình
    #include <stdlib.h> // Tạo exit() thoát chương trình
    int main(){
        int chon;
        do {
            printf("|--------------------------------------------------------|\n");
            printf("|Chào mừng bạn Huỳnh Trường Lộc đến với ASSIGNMENT COM108|\n");
            printf("|--------------------------------------------------------|\n");
            printf("|                   Chương trình tổng hợp                |\n");
            printf("|Chức năng 1: Kiểm tra số nguyên                         |\n");
            printf("|Chức năng 2: Ước số và bội số chung của 2 số            |\n");
            printf("|Chức năng 3: Tính tiền cho quán Karaoke                 |\n");
            printf("|Chức năng 4: Tính tiền điện                             |\n");
            printf("|Chức năng 5: Chức năng đổi tiền                         |\n");
            printf("|Chức năng 6: Tính lãi vay suất vay trả góp từ ngân hàng |\n");
            printf("|Chức năng 7: Vay tiền mua xe                            |\n");
            printf("|Chức năng 8: Sắp xếp thông tin sinh viên                |\n");
            printf("|Chức năng 9: Xây dựng game FPOLY-LOTT                   |\n");
            printf("|Chức năng 10: Tính toán phân số                         |\n");
            printf("|Chức năng 0: Thoát                                      |\n");
            printf("|--------------------------------------------------------|\n");
            printf("Vui lòng chọn chức năng: \n");
            scanf("%d", &chon);
            switch (chon) {
                case 1:
                    printf("Số nguyên: \n");
                    getch();
                    break;
                case 2:
                    printf("2 số nguyên: \n");
                    getch();
                    break;
                case 3:
                    printf("Giờ hát: \n");
                    getch();
                    break;
                case 4:
                    printf("Điện(kWh) tiêu thụ: \n");
                    getch();   
                    break;
                case 5:
                    printf("Tiền cần đổi: \n");
                    getch(); 
                    break;
                case 6:
                    printf("Tiền cần vay: \n");
                    getch();
                    break;
                case 7:
                    printf("Giá trị xe cần mua: \n");
                    getch();
                    break;
                case 8:
                    printf("Số lượng sinh viên: \n");
                    getch();
                    break;
                case 9:
                    printf("BINGOOOO - GAME FPOLY-LOTT\n");
                    getch();
                    break;
                case 10:
                    printf("Phân số: \n");
                    getch();
                    break;
                case 0:
                    printf("Thoát\n");
                    exit(0);
                    break;
                default: {
                    printf("Vui lòng chọn lại (1-10). Thoát (0)");   
                } 
            }
        }   while (chon != 0);
        return 0;
    }