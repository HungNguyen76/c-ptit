#include<stdio.h>

#define MAX_LENGTH 100

//cách 1: Khởi tạo kiểu cấu trúc sinhVien sử dụng struct
struct sinhVien{
    char *name;
//    char name[MAX_LENGTH];
    int age;
    char gender;
    int height;
    int weight;
};

//cách 2: sử dụng typedef
typedef struct {
    char name[MAX_LENGTH];
    int age;
    char gender;
    double height;
    double weight;
}sv;

//cách 3: sử dụng struct typedef cú pháp viết tắt
//typedef struct sinhVien sv1;

int main(void){
    //Khởi tạo thực thể từ kiểu cấu trúc được tạo bởi struct

    //struct sinhVien Duy = {"NTDuy", 22, 'M', 180, 75.5 };

    //Khởi tạo thực thể từ cấu trúc được tạo bởi typedef struct
   //sv Huy = {"NDBHuy", 24, 'M', 180, 93};

    //Truy cập vào các thành viên trong cấu trúc
    //cách 1: Sử dụng dấu chấm .
    struct sinhVien Phu;
    Phu.name="NHTPhu";
    Phu.age = 24;
    Phu.gender='M';
    Phu.height=180;
    Phu.weight=80;
    printf("Info cua Phu:\nname-%s\n tuoi-%d\n gioitinh-%c\n chieucao-%d\n cannang-%d\n",
           Phu.name,
           Phu.age,
           Phu.gender,
           Phu.height,
           Phu.weight);
}
