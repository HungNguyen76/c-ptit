#include<stdio.h>
#define MAX_LENGTH 100

typedef struct {
    char name[MAX_LENGTH];
    int age;
}person;


int main() {
    //Declaration
    //Khai báo mảng cấu trúc chứa 5 thực thể của kiểu cấu trúc person
    //person p[5];

    //Initialization
    //khởi tạo mảng person
    person p[5] = {
            {"TAnh", 23},
            {"Ngoc", 18},
            {"Huy", 24},
            {"Hao", 23},
            {"Trung", 23},
    };
    //Truy cập vào thực thể trong mảng cấu trúc và gán thực thể vào một biến
    person p0 = p[0];

    //Truy cập vào thành viên của thực thể trên và gán vào một mảng chuỗi
    char *name = p0.name;

    float ageSum;
    ageSum = 0;
    for (int i = 0; i < 5; i++) {
        ageSum += p[i].age;
    }

    float ageAv = ageSum/5;
    printf("Tuoi trung binh cua lop PTIT: %f", ageAv);
}