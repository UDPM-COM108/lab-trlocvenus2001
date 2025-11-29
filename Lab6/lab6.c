// Bài 1: Tính trung bình tổng các số chia hết cho 3 trong mảng
#include <stdio.h>

int main() {
    int n, i;
    printf("Nhập số phân tử của mảng: ");
    scanf("%d", &n);
    int mang[n];
    for(i = 0; i < n; i++) {
        printf("Nhập số phân tử  %d: ", i + 1);
        scanf("%d", &mang[i]);
    }
    float tong = 0;
    int count = 0;
    for(i = 0; i < n; i++) {
        if(mang[i] % 3 == 0) {
            tong += mang[i];
            count++;         
        }
    }
    if(count > 0) {
        float tb = tong / count;
        printf("Trung bình tổng các số chia hết cho 3 là: %.2f\n", tb);
    } else {
        printf("Trong mảng không có số nào chia hết cho 3.\n");
    }
    return 0;
}
// Bài 2: Tìm giá trị lớn nhất và nhỏ nhất trong mảng
#include <stdio.h>

int main() {
    int n, i;
    printf("Nhập số phân tử của mảng: ");
    scanf("%d", &n);
    int mang[n];
    for(i = 0; i < n; i++) {
        printf("Nhập mảng[%d]: ", i);
        scanf("%d", &mang[i]);
    }
    int max = mang[0];
    int min = mang[0];
    for(i = 1; i < n; i++) {
        if(mang[i] > max) {
            max = mang[i];
        }
        if(mang[i] < min) {
            min = mang[i];
        }
    }
    printf("Giá trị lớn nhất: %d\n", max);
    printf("Giá trị nhỏ nhất: %d\n", min);
    return 0;
}
// Bài 3: Sắp xếp mảng theo thứ tự giảm dần
#include <stdio.h>

int main() {
    int n, i, j, temp;
    printf("Nhập số phân tử của mảng: ");
    scanf("%d", &n);
    int mang[n];
    for(i = 0; i < n; i++) {
        printf("Nhập mảng[%d]: ", i);
        scanf("%d", &mang[i]);
    }
    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(mang[i] < mang[j]) { 
                temp = mang[i];
                mang[i] = mang[j];
                mang[j] = temp;
            }
        }
    }
    printf("\nMảng sau khi sắp xếp dần: \n");
    for(i = 0; i < n; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");
    return 0;
}
// Bài 4: Tính bình phương các phần từ của mảng 2 chiều
#include <stdio.h>

int main() {
    int n, m, i, j;
    printf("Nhập số dòng (n): ");
    scanf("%d", &n);
    printf("Nhập số cột (m): ");
    scanf("%d", &m);
    int mang[n][m];
    printf("Nhập các phân tử của ma trận:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            printf("mảng[%d][%d] = ", i, j);
            scanf("%d", &mang[i][j]);
        }
    }
    printf("\nMa trận bình phương:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            printf("%d\t", mang[i][j] * mang[i][j]);
        }
        printf("\n");
    }
    return 0;
}
// Bài 5: (nếu có) .............