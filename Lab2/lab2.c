//Bài 1: XÂY DỰNG CHƯƠNG TRÌNH +- 2 SỐ NGUYÊN
/*include <stdio.h>
int main (){
  int a,b,tong,hieu; // khai báo biến a,b kiểu số nguyên
    printf("Nhap a và b: "); // xuất ra màn hình
    scanf("%d %d", &a, &b); // nhập vào a và b
    tong = a + b; // tính tổng
    hieu = a - b; // tính hiệu
    printf("\nTổng của a và b là: %d", tong); // xuất ra
    printf("\nHiệu của a và b là: %d", hieu); // xuất ra
    return 0;
}*/

//Bài 2: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI VÀ DIỆN TÍCH HÌNH CHỮ NHẬT
/*#include <stdio.h> // thư viện
int main(){ // hàm chính
  int a,b,P,S; // khai báo biến a,b kiểu số nguyên
    printf("Nhap a và b: "); // xuất ra màn hình
    scanf("%d %d", &a, &b); // nhập vào a và b 
    P = (a + b) * 2; // tính chu vi
    S = a * b; // tính diện tích
    printf("Chu vi hinh chu nhat la: %d", P); // xuất ra màn hình
    printf("\nDien tich hinh chu nhat la: %d", S); // xuất ra màn hình
    return 0; // kết thúc hàm chính
}*/

//BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI VÀ DIỆN TÍCH HÌNH TRÒN
/*#define PI 3.14
#include <stdio.h> // thư viện
int main(){ // hàm chính
  float r,P,S; // khai báo biến r kiểu số thực
    printf("Nhap ban kinh hinh tron: "); // xuất ra màn hình
    scanf("%f", &r); // nhập vào r
    P = 2 * PI * r; // tính chu vi
    S = PI * r * r; // tính diện tích
    printf("Chu vi hinh tron la: %.2f", P); // xuất ra màn hình
    printf("\nDien tich hinh tron la: %.2f", S); // xuất ra màn hình
    return 0; // kết thúc hàm chính
}*/

//Bài 4: Xây dựng chương trình tính điểm trung bình
/*Nhập: Toán lý hóa
Xuất: điểm trung bình
Hệ số của toán: x3
Hệ số của lý: x2
Hệ số của hóa: x1
#include <stdio.h> // thư viện

int main(){ // hàm chính
  float toan, ly, hoa, diemTB; // khai báo biến
    printf("Nhap diem toan: "); 
    scanf("%f", &toan); 
    printf("Nhap diem ly: "); 
    scanf("%f", &ly); 
    printf("Nhap diem hoa: "); 
    scanf("%f", &hoa); 
    diemTB = (toan * 3 + ly * 2 + hoa) / 6; // tính điểm trung bình
    printf("Diem trung binh la: %.2f\n", diemTB); // xuất ra
    return 0; // kết thúc hàm chính
}*/

/*Bài 5: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HÌNH TAM GIÁC VUÔNG
#include <stdio.h> // thư viện

int main(){ // hàm chính
    float a,b,c,P,S;
    printf("Nhap do dai canh a: ");
    scanf("%f", &a);
    printf("Nhap do dai canh b: ");
    scanf("%f", &b);
    c = sqrt(a*a + b*b); // tính cạnh huyền
    P = a + b + c; // tính chu vi
    S = (a * b) / 2; // tính diện tích
    printf("Chu vi hinh tam giac vuong la: %.2f\n", P); // xuất ra
    printf("Dien tich hinh tam giac vuong la %.2f\n", S); // xuất ra )
    return 0;
}*/
