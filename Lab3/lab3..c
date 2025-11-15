/*// Bài 1: Viết chương trình xây dựng tính học lực
#include <stdio.h> // thư viện

int main (){ 
    double dtb;
    printf("Nhập điểm trung bình từ 0 đến 10:"); // nhập điểm của sinh viên
    scanf("%lf",&dtb);
    // Xử lí logic (Thuật toán)
    if (dtb < 0 || dtb > 10){ // Nếu nhập số không thuộc [0,10] thì xuất báo lỗi
        printf("Lỗi! Điểm trung bình phải từ 0 đến 10.\n");
    }
    // Xét học lực dựa trên điểm trung bình
    else if (dtb>=9){ // Nếu kết quả lớn hơn bằng 9 -> Bạn thuộc top học lực xuất sắc
        printf("Học lực xuất sắc\n");
    }
    else if (dtb>=8){ // Nếu kết quả lớn hơn bằng 8 -> Bạn thuộc top học lực giỏi
        printf("Học lực giỏi\n");
    }
    else if (dtb>=6.5){ // Nếu kết quả lớn hơn bằng 6.5 -> Bạn thuộc top học lực khá
        printf("Học lực khá\n");
    }
    else if (dtb>=5){ // Nếu kết quả lớn hơn bằng 5 -> Bạn thuộc top học lực trung bình
        printf("Học lực trung bình");
    }
    else if (dtb>=3.5){ // Nếu kết quả lớn hơn bằng 3.5 -> Bạn thuộc top học lực yếu
        printf("Học lực yếu");
    }
    else{ // Nếu kết quả nhỏ hơn 3.5 -> Bạn thuộc top học lực kém
        printf("Học lực kém");
    }
    return 0; // kết thúc
}*/

/*// Bài 2: Viết chương trình xây dựng phương trình bậc 1
#include <stdio.h>

int main() {
    double a, b, x;  // Khai báo biến a, b và nghiệm x
    printf("Phương trình có dạng ax + b = 0\n");
    printf("-------------------------------\n");
    // Nhập dữ liệu
    printf("Nhập giá trị a và b: ");
    scanf("%lf %lf", &a, &b);
    // Xử lý logic (Thuật toán)
    if (a == 0) { // TH: a = 0 -> Ta có 2 trường hợp như sau:
        if (b == 0) {
            // TH: b = 0 -> 0x + 0 = 0 -> Luôn đúng 
            printf("Phương trình vô số nghiệm.\n");
        } else { 
            // TH: b khác 0 (b != 0) -> 0x + b = 0 -> Vô lý 
            printf("Phương trình vô nghiệm.\n");
        }
    } else {
        // TH a khác 0 (a != 0)-> Có 1 nghiệm duy nhất x = -b/a
        x = -b / a;
        printf("Phương trình có nghiệm x = %lf\n", x);
    }
    return 0; // Kết thúc
}*/
/*// Bài 3: Viết chương trình xây dựng phương trình bậc 2
#include <stdio.h>
#include <math.h> // Dùng thư viện này để giải phương trình bậc 2 

int main() {
    double a, b, c, x1, x2, delta; // Khai báo biến a, b, c, các nghiệm x và delta
    printf("Phương trinh có dạng ax2 + bx + c = 0\n");
    printf("-------------------------------------\n");
    // Nhập dữ liệu
    printf("Nhập giá trị a, b và c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    // Xử lí logic (Thuật toán)
    if (a == 0) { // TH: a = 0 -> Phương trình bậc nhất
        printf("Phương trình bậc nhất.\n");
        printf("----------------------\n");
        if (b == 0) { // TH b = 0 -> Ta có 2 trường hợp như sau:
            if (c == 0) {
                // TH: c = 0 -> 0x^2 + 0x + 0 = 0 -> Luôn đúng
                printf("Phương trình vô số nghiệm.\n");
            } else { 
                // TH: c khác 0 (c != 0)-> 0x^2 + 0x + c = 0 -> Vô lý
                printf("Phương trình vô nghiệm.\n");
            }
        } else {
            x1 = -c / b;
            printf("Phương trình có nghiệm x = %.lf\n, x1");
        }
    }
    else { // TH: a khác 0 (a! = 0) -> Phương trình bậc 2
        // Công thức delta
        delta = (b*b - 4*a*c);
        if (delta < 0) { // TH: Delta < 0 -> Phương trình vô nghiệm
            printf("Delta = %.lf < 0\n", delta);
            printf("Phương trình vô nghiệm.\n");
        }
        else if (delta == 0 ){ // TH: Delta = 0 -> Phương trình có nghiệm kép 
            x1 = -b / (2*a);
            printf("Delta = 0\n");
            printf("Phương trình có nghiệm kép x1 = x2 = %.lf\n", x1);
        }
        else { // TH: Delta > 0 -> Phương trình có 2 nghiệm riêng biệt
            x1 = (-b + sqrt(delta))/(2*a);
            x2 = (-b + sqrt(delta))/(2*a);
            printf("Delta = %.lf > 0\n", delta);
            printf("Phương trình có 2 nghiệm riêng biệt.\n");
            printf("x1 = %.lf\n", x1);
            printf("x2 = %.lf\n", x2);
        }
    }
    return 0;
}*/

// Bài 3: Xây dựng chương trình tính tiền điện
/*#include <stdio.h>
// Nhập giá trị hằng số bao gồm thứ tự bậc, số kwh sử dụng và giá bán điện (đồng/kWh)
const int bac_1 = 50; // Bậc 1 từ 0 - 50 kWh
const int bac_2 = 100; // Bậc 2 từ 50 - 100 kWh
const int bac_3 = 200; // Bậc 3 từ 100 - 200 kWh
const int bac_4 = 300; // Bậc 4 từ 200 - 300 kWh
const int bac_5 = 400; // Bậc 5 từ 300 - 400 kWh
// Bậc 6 không có gán giá trị hằng số, Bậc 6 từ 400 trở lên
const double gia_1 = 1678;
const double gia_2 = 1734;
const double gia_3 = 2014;
const double gia_4 = 2536;
const double gia_5 = 2834;
const double gia_6 = 2927;
// Khai báo biến số điện tiêu thụ, số điện còn lại, mặc định tổng tiền luôn luôn bằng 0
double sodientieuthu, sodienconlai, tongtien = 0;

int main(){
    printf("Tính tiền điện\n");
    printf("--------------\n");
    printf("Nhập số tiền điện tiêu (kWh)\n");
    scanf("%lf",&sodientieuthu);
    // Kiểm tra số nhập
    if (sodientieuthu < 0){
        printf("Lỗi: Số điện tiêu thụ không thể âm bằng 0.\n");
        return 1; // Thoát
    }
    sodienconlai = sodientieuthu; // Gán số vừa nhập cho biến sodienconlai để thực hiện tính toán
    // Tính toán tiền điện
    // Bậc 6 (400kWh trở lên)
    if (sodienconlai > bac_5){
        double bac_6 = sodienconlai - bac_5;
        tongtien += bac_6 * gia_6;
        sodienconlai = bac_5;
    }
    // Bậc 5 (300 - 400kWh)
    if (sodienconlai > bac_4){
        double bac_5 = sodienconlai - bac_4;
        tongtien += bac_5 * gia_5;
        sodienconlai = bac_4;
    }
    // Bậc 4 (200 - 300kWh)
    if (sodienconlai > bac_3){
        double bac_4 = sodienconlai - bac_3;
        tongtien += bac_4 * gia_4;
        sodienconlai = bac_3;
    }
    // Bậc 3 (100 - 200kWh)
    if (sodienconlai > bac_2){
        double bac_3 = sodienconlai - bac_2;
        tongtien += bac_3 * gia_3;
        sodienconlai = bac_2;
    }
    // Bâc 2 (50 - 100kWh)
    if (sodienconlai > bac_1){
        double bac_2 = sodienconlai - bac_1;
        tongtien += bac_2 * gia_2;
        sodienconlai = bac_1;
    }
    // Bậc 1 (0 - 50kWh)
    tongtien += sodienconlai * bac_1;
    printf("--------------\n");
    printf("Số tiền còn lại: %.0lf dong\n", tongtien);
    return 0;
}*/

/*// Bài 4: Sử dụng switch-case để thực hiện tạo menu cho 3 bài tập trên
#include <stdio.h>

int main(){
    int luachon;
    printf("Chọn chương trình tính toán\n");
    printf("1. Tính học lực");
    printf("2. Giải phương trình bậc nhất\n");
    printf("3. Giải phương trình bậc hai\n");
    printf("4. Tính tiền điện\n");
    printf("0. Thoát\n");
    scanf("%d",&luachon);
    switch (luachon){
        case 1:
            printf("Tính học lực:");
            break;
        case 2:
            printf("Tính phương trình bậc nhất: ");
            break;
        case 3:
            printf("Tính phương trình bậc hai:");
            break;
        case 4:
            printf("Tính tiền điện - Coming soon:");
            break;
        case 0:
            printf("Thoát!");
            break;
        return 0;
        default:
            printf("vui lòng chọn lại từ 1 đến 4. Hoặc chọn 0 để thoát\n");
        break;
        }
        if (luachon==0){
            printf("Cảm ơn bạn và hẹn gặp lại");
            }
        printf("\n");
    return 0;
}*/