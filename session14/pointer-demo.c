#include<stdio.h>

int main() {
    //cách 1 khai báo biến con trỏ
    int* p;

    //cách 2 khai báo biên con trỏ
    int * p1;

    //cách 3 khai báo biến con trỏ
    int *p2;

    //cách 4 khai báo biến con trỏ
    int* a, a1;

    //Gắn địa chỉ cho con trỏ trong C
//    int* pc, c;
//    c = 10;
//    pc = &c; //gán biến con trỏ pc cho địa chỉ của c

    //lấy giá trị của con trỏ trong C
//    printf("%d \n", *pc);

    //Thay đổi giá trị của con trỏ
//    c = 2;
//    printf("%d\n", c);
//    printf("%d", *pc);

    //ví dụ 2:
//    int* pa, d, e;
//    d = 2;
//    e = -3;
//    pa = &d;
//    printf("%d", *pa);
//    pa = &e;
//    printf("%d", *pa);

    int* pc, c;
    c = 18;
    printf("Address of c: %p\n", &c);
    printf("Value of c: %d\n\n", c);

    pc = &c;
    printf("Address of pointer pc: %p\n", pc);
    printf("Content of pointer pc: %d\n\n", *pc);

    c = 10;
    printf("Address of pointer pc: %p\n", pc);
    printf("Content of pointer pc: %d\n\n", *pc);

    *pc = -2; // ==> c = -2
    printf("Address of c: %p\n", &c); // => &c là con trỏ pc
    printf("Value of c: %d\n\n", c);
}