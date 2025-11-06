#include <stdio.h> // thư viện

int main(){ // hàm chính
  //printf("Hello World!"); // Xuất ra màn hình Hello World!
  //printf("\nHello World!"); \n là xuống dòng
  int a,b; // khai báo biến a,b kiểu số nguyên
  char ten[10]; // khai báo biến ten kiểu chuỗi ký tự có độ dài 10
  printf("Nhap a và b: "); // xuất ra màn hình
  scanf("%f %f", &a, &b); // nhập vào a và b
  printf("Nhap vao tên tôi: "); // xuất ra màn hình
  scanf(" %s", &ten); // nhập vào tên tôi
  printf("\nXin chào tôi tên là: %s", ten); // xuất ra màn hình
  return 0; // kết thúc hàm chính
} // kết thúc hàm chính