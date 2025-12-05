// Bài 1: Xây dựng chương trình tìm giá trị lớn nhất trong 3 số
/*#include <stdio.h>

int searchMax(int a1, int b1, int c1) { 
    int max = a1;
    if (max < b1){
        max = b1;
    }
    if (max < c1){
        max = c1;
    }
    return max;
}
int main(){
    int a2, b2, c2;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a2, &b2, &c2);
    int numberMax = searchMax(a2, b2, c2);
    printf("numberMax = %d", numberMax);
    return 0;
}*/
// Bài 2: Xây dựng hàm tính năm nhuận
/*#include <stdio.h>

int checkYear(int year){
    int flag = 0;
    if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0){
        flag = 1;
    }
    return flag;
}
int main(){
    int numberYear;
    printf("Enter the year to check: ");
    scanf("%d", &numberYear);
    if (checkYear(numberYear) == 1){
        printf("%d is leap year");
    } else {
        printf("%d is non-leap year");
    }
    return 0;
}*/
// Bài 3: Xây dựng hàm hoán vị
/*#include <stdio.h>
void swap(int *a1, int *b1){
    int temp;
    temp = *a1;
    *a1 = *b1;
    *b1 = temp;
}
int main(){
    int a2, b2;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &a2, &b2);
    printf("Before swapping: a2 = %d, b2 = %d\n", a2, b2 );
    swap(&a2, &b2);
    printf("After swapping: a2 = %d, b2 = %d\n", a2, b2);
    return 0;
}*/
