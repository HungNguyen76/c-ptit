#include <stdio.h>

void input_array(int *a, int n);
int main() {
//    int num[3] = {1,2,3}, *p;
//    p = num;

    //Gán địa chỉ biến cho con trỏ
//    char a = 'M', *p1;
//    p1 = &a;

//        int nums[] = {10,20,30,44,55}, *p2;
//        p2 = nums;
//    printf("%d\n", p2);
//    printf("array[0] address: %d\n", p2);//Địa chỉ phần tử đầu tiên
//    printf("array[1] address: %d\n", p2 +1);//Địa chỉ phần tử thứ hai
//    printf("array[3] address: %d\n", p2 +3);//Địa chỉ phần tử thứ tư

//    printf("Nhap nums[0] = ");
//    scanf("%d", p2);
//
//    printf("Nhap nums[1] = ");
//    scanf("%d", (p2+1));
//
//    printf("Nhap nums[2] = ");
//    scanf("%d", (p2+2));

//    printf("nums[2]= %d\n", *(p2+2));
//    printf("nums[1]= %d\n", nums[1]);
//    printf("nums[2]= %d\n", nums[2]);

    int a[100], n;
    printf("Nhập phần tử của mảng: \n");
    scanf("%d", &n);

    input_array(a, n);

    printf("Mảng vừa nhập: ");
    for(int i = 0; i < n; i++) {
        printf("%d", *(a+i));
    };
}
/*Tạo hàm nhập mảng 1 chiều trong C*/
void input_array(int *a, int n) {
    for(int i = 0; i < n; i++) {
        printf("Nhập a[%d]: ", i);
        scanf("%d", a+i);
    };
}