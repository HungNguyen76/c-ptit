#include <stdio.h>
//khai báo biến MAX = 100
#define MAX 100
/* hàm nhập với tham số là một mảng số thực với số phần tử n */
void nhap(float a[], int n) {
//sử dụng do..while để yêu cầu người dùng nhập vào số phần tử
do  {
        printf("\nNhập số phần tử: ");
        scanf("%d", &n);
        if(n<=0 || n>MAX){
        printf("\nSố phần tử không hợp lệ, xin vui lòng kiểm tra lại");
    }
}while(n<=0 || n> MAX);
//sử dụng vòng lặp for để yêu cầu người dùng nhập vào giá trị cho từng phần tử
for(int i = 0; i < n; i++){
printf("Nhập a[%d]= ", i);
scanf("%f", &a[i]);
}
}
/* hàm tìm phần tử nhỏ nhất trong mảng */
float isMin(float a[], int n){
    //gán phần tử đầu tiên cho biến min
    float min = a[0];
    //sử dụng vòng lặp for để so sánh min với từng phần tử trong mảng
    //phần tử nào nhỏ hơn min thì gán nó cho min
    for(int i = 0; i < n; i++){
        if(a[i] < min){
            min = a[i];
        }
    }
    //như vậy đến cuối vòng lặp ta sẽ được min là phần tử nhỏ nhất
    return min;
}
/* hàm xuất */
void xuat(float a[], int n){
    //xuất các phần tử trong mảng
    printf("Các phần tử trong mảng là: ");
    for(int i = 0; i < n; i++){
        printf("%f\t",a[i]);
    }
    //xuất phần tử nhỏ nhất trong mảng
    printf("\nPhần tử nhỏ nhất là: %.1f",isMin(a,n));
    printf("\n---------------------------------\n");
}
/* hàm main */
int main() {
    int n;
    float a[MAX];
    nhap(a,n);
    xuat(a,n);
}