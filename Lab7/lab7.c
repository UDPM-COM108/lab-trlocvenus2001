// Bài 1: Kiểm tra chuỗi kí tự có bao nhiêu nguyên âm và phụ âm
#include <stdio.h>

int main(){
    char s[100];
    int i = 0;
    int n = 0;
    int p = 0;
    printf("Xin mời nhập vào chuỗi: ");
    gets(s);
    while (s[i] != '\0'){
        if (s[i] =='a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            n++;
        } else {
            p++;
        }
        i++;
    }
    printf("Chuỗi %s có chứa: %d nguyên âm và %d phụ âm.", s, n, p);
    return 0;
}
// Bài 2: Đăng nhập bằng username và password
#include <stdio.h>
#include <string.h>

int main(){
    char userSys = "admin";
    int passSys = 12345;
    char user[100];
    int pass;
    printf("Nhập username: ");
    scanf("%c", &user);
    printf("Nhập password: ");
    scanf("%d", &pass);
    if(strcmp(user, userSys) == 0 && pass == passSys){ //  Kiểm tra và nối 2 chuỗi lại giống hệt lại với nhau
        printf("Đăng nhập thành công.\n");
    } else {
        printf("Đăng nhập thất bại.\n");
    }
    return 0;
}
// Bài 3: Sắp xếp chuỗi theo chữ cái
#include <stdio.h>
#include <string.h>

int main(){
    char s[5][20];
    char temp[20];
    int i, j;
    printf("Nhập 5 chuỗi: ");
    for (i = 0; i < 5; i++){
        printf("Chuỗi %c", i + 1);
        scanf("%s", s[i]);
        }
    for (i = 0; i < 4; i++){
        for (j = 0; j < 5; j++){
            if(strcmp (s[i], s[j] > 0)){ // hoán vị các chuỗi, sử dụng hàm strcpy
                strcpy(temp, s[i]);
                strcpy(s[i], s[j]);
                strcpy(s[j], temp);
            }
        }
    }
    printf("\nCác chuỗi sau khi sắp xếp:\n");
    for (i = 0; i < 5; i++){
        printf("%s\n",s[i]);
    }
    return 0;   
}