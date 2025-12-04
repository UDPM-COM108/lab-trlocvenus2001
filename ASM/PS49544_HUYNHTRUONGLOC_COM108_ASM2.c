#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int chon;
    do {
        printf("");
        //...
        printf("");
        scanf("%d", &chon);
        switch(chon){
            case 1: {
                double x;
                printf("x = ");
                scanf("%lf", &x);
                if (x == (int)x){ 
                    printf("%.2lf là số nguyên.\n", x); // Output 1
                    int n = (int)x; 
                    int songuyento = 1; 
                    if (n < 2){ 
                        songuyento = 0;
                    } else {    
                        for (int i = 2; i <= sqrt(n); i++){ 
                            if (n % i == 0){
                                songuyento = 0;
                                break;
                            }
                        }
                    }
                    if (songuyento == 1){
                        printf("%d là số nguyên tố.\n", n); // Output 2
                    } else {
                        printf("%d không phải là số nguyên tố.\n", n); // Output 2
                    }
                    int canbac2 = sqrt(n);
                    if (pow(canbac2, 2) == n){
                        printf("%d là số chính phương.\n", n); // Output 3
                    } else {
                        printf("%d không phải là số chính phương. \n", n); // Output 3
                    }
                } else {
                    printf("%.2lf là số thập phân.\n", x); // Output 1
                    printf("Không thực hiện các bước kiểm tra số nguyên tố và số chính phương.\n");
                }
                break;
            }
            case 2: {
                break;
            }
            case 3: {
                break;
            }
            case 4: {
                break;
            }
            case 5: {
                break;
            }
            case 6: {
                break;
            }
            case 7: {
                break;
            }
            case 8: {
                break;
            }
            case 9: {
                break;
            }
            case 10: {
                break;
            }
            case 0: {
                break;
            }
            default:
                printf("");
        }
    } while (chon != 0);
    return 0;  
}