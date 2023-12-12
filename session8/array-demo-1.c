#include <stdio.h>
#include <string.h>
int main() {
//    int bangdiem[][3] ={
//            {7,8,9},
//            {8,6,7}
//    };
//    //Lấy giá trị phần tử
//    printf("Phan tu [1][2]: %d\n", bangdiem[1][2]);
//
//    //thay đổi giá trị phần tử
//    bangdiem[0][2] = 5;
//    printf("phan tu [0][2] sau khi cap nhat: %d\n", bangdiem[0][2]);

//    int y,x;
//    printf("Nhap do dai (so mang 1 chieu) trong mang 2 chieu: ");
//    scanf("%d", &y);
//    printf("Nhap do dai so phan tu trong mang 1 chieu: ");
//    scanf("%d", &x);
//
//    int array[y][x];
//    printf("Nhap phan tu: \n");
//    for(int i = 0; i < y; i++) {
//        for(int j = 0; j < x; j++) {
//            scanf("%d", &array[i][j]);
//        };
//    };
//    printf("Mang vua nhap: \n");
//    for(int i = 0; i < y; i++) {
//        for(int j = 0; j < x; j++) {
//            printf("%d", array[i][j]);
//        };
//        printf("\n");
//    };
//        int a[][3] = {
//                {1,2,3},
//                {4,5,6},
//                {7,8,9},
//        };
    //Lấy độ dài của mảng 2 chiều
//        int x = sizeof(a)/sizeof(a[0]);
//        int y = sizeof(a[0])/sizeof(a[0][0]);
//
//        //in từng phần tử trong mảng 2 chiều
//        for(int i = 0; i < y; i++) {
//            for (int j = 0; j < x; j++) {
//                printf("%d", a[i][j]);
//            };
//            printf("\n");
//        };

//        char s[][6] ={"ABCDEFG", "DEFAVC", "EFGFDC"};
//        printf("%d\n", sizeof(s[0]));
//        printf("%s\n", s[1]);
//        printf("%s\n", s[2]);
//        return 0;

//            char b[] ="abcdef";
//                int c[] = {13,15,16,17};
//           int length = sizeof b/ sizeof(char);
//            int length = sizeof c/sizeof(int);
//            printf("%d \n", length);
//    printf("%d \n", sizeof(int));
//    printf("%d", sizeof(c));

//===========Sao chep mang trong C============
//Khởi tạo chuỗi ban đầu
//int data1 [10] = {1,2,3,4,5,6,7,8,10,11};
//khai báo chuỗi kết quả có cùng độ dài
//int data2[10];
//Tạo vòng lặp, lấy và copy từng phần tử của mảng  và gán vào mản mới
//for (int i = 0; i < 10; i++) {
//    data2[i] = data1[i];
//};
//Kiểm tra lại mảng mới
//for( int i = 0; i < 10; i++) {
//    printf("%d ", data2[i]);
//};

//===========Sao chep mang 2 chieu trong C============
//short data1[2][10]={
//        {5,6,7,8,9,10,11,12,13,14},
//        {15,16,17,18,19,20,21,22,23,24},
//};
//short data2[2][10];
//for(int i = 0; i < 2; i++) {
//    for(int j = 0; j < 10; j++) {
//        data2[i][j] = data1[i][j];
//    }
//}
//Kiểm tra mảng mới
//    printf("mảng data2 sau khi copy: \n");
//    for(int i = 0; i < 2; i++) {
//        for(int j = 0; j < 10; j++) {
//            printf("%d ", data2[i][j]);
//        }
//        printf("\n");
//    }

//===========Su dung ham memcpy() trong C============
    short src[10] ={1,2,3,4,5,6,7,8,9,10};
    short dest[10];
//Sao chép mảng trong C bằng hàm memcpy
    memcpy((void *) dest, (void *) src, sizeof(src));

//Kiểm tra mảng mới
    for(short i = 0; i < 10; i++) {
        printf("%d ", dest[i]);
    }
};