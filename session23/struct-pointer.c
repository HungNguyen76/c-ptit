//#include <stdio.h>
//
//struct person {
//    char *name;
//    char gender;
//    int age;
//    char *add;
//    char *job;
//};
//
//int main() {
//    //Khai báo thực thể Duy, và con trỏ tới thực thể này
//   struct person Duy, *p;
//
//    // Gán địa chỉ của thực thể vào con trỏ
//    p = &Duy;
//
//    //Truy cập và gán giá trị vào từng thành viên trong con trỏ cấu trúc
//    p->name = "NTDuy";
//    p->gender = 'M';
//    p->age = 22;
//    p->add = "abc";
//    p->job = "IT";
//    printf("Duy= %s %c %d %s %s", Duy.name, Duy.gender, Duy.age, Duy.add, Duy.job);
//}

#include<stdio.h>

typedef struct {
    double re;
    double im;
}complex;

void addComplexPtr(complex *a, complex *b , complex *c){
    (*c).re = (*a).re + (*b).re;
    (*c).im = (*a).im + (*b).im;
}
void printfComplexPtr(complex c){
    printf("%lf + %lf i",c.re,c.im);
}

int main()
{
    complex x={1.2,3.4};
    complex y={5.6,7.8};
    complex z;
    complex *p1 = &x;
    complex *p2= &y;
    complex *p3 = &z;
    addComplexPtr(p1,p2,p3);
    printfComplexPtr(z);
    return 0;
}