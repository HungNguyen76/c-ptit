#include<stdio.h>
#include<string.h>

//khai bao ham
//int find_sum(int a, int b ) {
////    int sum = a + b;
//    return a + b;
//}
//void find_sum_void(int a, int b) {
//    int sum = a + b;
//    printf("%d", sum);
//}
int max_number(int a, int b) {
//    int max = (a>b)?a:b;
//    printf("%d", max);
    return a > b ? a : b;
}

int main(void)  {
//    int kq = find_sum(1,2);
int max = max_number(34,-34);
    printf("%d", max);
//    find_sum_void(1, 2);//goi ham
//    return 0;
//printf("Nhap chuoi ky tu: ");
//char str[100];
//scanf("%s", str);
//
//int len = strlen(str); //Ham strlen tinh do dai chuoi
//printf("Do dai chuoi: %d", len);

}