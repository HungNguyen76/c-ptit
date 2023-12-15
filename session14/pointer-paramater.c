#include <stdio.h>
//void swap(int *n1, int *n2);
//
//int main()
//{
//    int num1 = 1, num2 = 2;
//    swap( &num1, &num2); // gọi hàm swap và truyền đối số (địa chỉ num1, địa chỉ num2)
//    printf("num1 = %d\n", num1);
//    printf("num2 = %d", num2);
//    return 0;
//}
//
//void swap(int* n1, int* n2)
//{
//    int temp;
//    temp = *n1;
//    //n1 = n2; // gán địa chỉ của con trỏ n1 cho địa chỉ của con trỏ n2
//    *n1 = *n2; // gán giá trị của con trỏ n1 cho con trỏ n2
//    *n2 = temp;
//}
//

void add(int* p1, int *p2) {
    (*p1) += 2; // *p1 = *p1 + 2
    (*p2) += 3; // *p2  = *p2 + 3
}
int main()
{
    int* pa, a = 5;
    int* pb, b = 6;
    pa = &a; // gán con trỏ pa bằng với địa chỉ của biến a
//    printf("%p", &pa);
    pb = &b;
    add(pa, pb); // pa , pb gọi là đối số
    printf("%d\n", a);
    printf("%d\n", b);
    return 0;
}