// Bài 1: Tính điểm trung bình tổng của 2 số tự nhiên chia hết cho 2
/*#include <stdio.h>

int main() {
    int min, max;
    float S = 0, dem = 0, dtb = 0;
    // Vòng lặp
    do {
        printf("Nhập max và min: ");
        scanf("%d %d", &max, &min);
        if (min > max){
            printf("Báo lỗi. Vui lòng nhập lại", max, min);
        }
    } while (min > max);
    int i = min; // khởi tạo i = min
    while (i <= max) { // vòng lặp while
        if (i % 2 == 0) { // điều kiện 
            S += i;    // tổng = tổng + i
            dem++;  // đếm = đếm + 1
        }
        i++; // Tăng i lên 1
    }

    // Kiểm tra biến đếm để tránh lỗi chia cho 0
    if (dem > 0) {
        dtb = S / dem;
        printf("Trung bình các số chia hết cho 2 từ %d đến %d là: %.2f\n", min, max, dtb);
    } else {
        printf("Không có số nào chia hết cho 2 trong khoảng [%d, %d].\n", min, max);
    }
    return 0;
}*/
// Bài 2: Xây dựng chương trình xác định số nguyên tố
/*#include <stdio.h>

int main() {
    int x, i, dem;
    printf("Nhập x: ");
    scanf("%d", &x);
    // Xử lí logic - Thuật toán
    if (x < 2) {
        // Số nguyên tố là số chỉ chia hết cho 1 và chính nó
        printf("%d không phải là số nguyên tố.\n", x);
    } else {
        for (i = 2; i < x; i++) { // Chạy vòng lặp từ 2 đến < x
            if (x % i == 0) {
                dem++;
                break; // Tìm thấy 1 ước là đủ, không cần chạy nữa
            }
        }
        if (dem == 0) { // Kiểm tra biến đếm
            printf("%d là số nguyên tố.\n", x);
        } else {
            printf("%d không phải là số nguyên tố.\n", x);
        }
    }
    return 0;
}*/
// Bài 3: Xây dựng chương trình số chính phương
/*#include <stdio.h>

int main() {
    int x, i, kiemtra;
    printf("Nhập x: ");
    scanf("%d", &x);
    // Xử lí logic - Thuật toán
    if (x < 0) {
        printf("%d không là số chính phương.\n", x);
    } else {
        // Chạy vòng lặp, tối ưu bằng cách chạy đến khi i*i > x
        for (i = 1; i * i <= x; i++) {
            if (i * i == x) {
                kiemtra = 1; // Tìm thấy là số chính phương
                break;     // Thoát khỏi vòng lặp
            }
        }
        if (kiemtra == 1) {
            printf("%d là số chính phương.\n", x, i);
        } else {
            printf("%d không phải là số chính phương.\n", x);
        }
    }
    return 0;
}*/

// Bài 4: Xây dựng chuyển số thập phân sang số nhị phân
/*#include <stdio.h>
#include <math.h>

long long dectobin(int dec) {
    long long bin = 0;
    int p = 0;
    while (dec > 0) {
        bin += (dec % 2) * pow(10,p);
        ++p;
        dec /= 2;
    }
    return bin;
}
int main (){
    int sothapphan;
    printf("Nhập số thập phân: \n");
    scanf("%d", &sothapphan);
    printf("Bin = %d", dectobin(sothapphan));
    return 0;
}*/
// Bài 5: Xây dựng menu chương trình cho 4 bài tập trên
#include <stdio.h>
#include <math.h>
long long dectobin (int dec){
    long long bin = 0;
    int p = 0;
    while (dec > 0) {
        bin += (dec % 2) * pow(10,p);
        ++p;
        dec /= 2;
    }
    return bin;
}
int main() {
    int chon;
    do {
        printf("Chức năng 1: Tìm số trung bình cộng\n");
        printf("Chức năng 2: Tìm số nguyên tố\n");
        printf("Chức năng 3: Tìm số chính phương\n");
        printf("Chức năng 4: Chuyển số thập phân sang số nhị phân\n");
        printf("Chức năng 0: Thoát\n");
        printf("Chọn: ");
        scanf("%d", &chon);
        switch (chon) {
            case 1: { 
                int min, max;
                float S = 0, dem = 0, dtb = 0;
                do {
                    printf("Nhập max và min:");
                    scanf("%d %d", &max, &min);
                    if (min > max){
                        printf("Báo lỗi. Vui lòng nhập lại.\n", max, min);
                    }
                }   while (min > max);
                break;
                int i = min;
                while (i <= max) {
                    if (i % 2 == 0) {
                        S += i;
                        dem++;
                    }
                    i++;
                }
                if (dem > 0) {
                    dtb = S / dem;
                    printf("Trung bình chia cho hết cho 2 từ %d đến %d là: %.2f\n", min, max, dtb);
                } else {
                    printf("Không có số nào chia hết cho 2 trong khoảng [%d, %d].\n", min, max);
                }
                break;
            }
            case 2: {
                int x, i, dem = 0;
                printf("Nhập x: ");
                scanf("%d", &x);
                if (x < 2) {
                    printf("%d không phải là số nguyên tố.\n", x);
                } else {
                    for (i = 2; i < x; i++) {
                        if (x % i == 0) {
                            dem++;
                            break;
                        }
                    }
                    if (dem == 0) {
                        printf("%d là số nguyên tố.\n", x);
                    } else {
                        printf("%d không phải là số nguyên tố.\n", x);
                    }
                }
                break;
            }
            case 3: {
                int x, i, kiemtra = 0;
                printf("Nhập x: ");
                scanf("%d", &x);
                if (x < 0) {
                    printf("%d không phải là số chính phương.\n", x);
                } else {
                    for (i = 1; i * i <= x; i++) {
                        if (i * i == x) {
                            kiemtra = 1;
                            break;
                        }
                    }
                    if (kiemtra == 1) {
                        printf("%d là số chính phương.\n", x, i);
                    } else {
                        printf("%d không phải là số chính phương.\n", x);
                    }
                }
                break;
            }
            case 4: {
                int main(){
                    int sothapphan;
                    printf("Nhập số thập phân: \n");
                    scanf("%d", &sothapphan);
                    printf("Bin = %d", dectobin(sothapphan));
                }
                break;
            }
            case 0:
                printf("Thoát.\n");
                break;
            default:
                printf("Vui lòng chọn lại (1-4). Thoát (0)\n");
        }
        if (chon != 0) {
            printf("\nEnter - Tiếp tục\n");
        }
    } while (chon != 0);
    return 0;
}