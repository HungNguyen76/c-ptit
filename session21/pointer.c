#include<stdio.h>
#include<string.h>
int main() {
//     char* p;
//     char * p;
//     char *p;
//        int num[] ={1,2,3,4,5};

//        char a[] = "Hello", *p1;
//        p1 = a;
//
//        char b[100], *p2;
//        p2 = b;

//        char a[] = "Hello cac ban", *p;
//        int i;
//        p = a;
//        printf("%d", strlen(a));
//        for(i = 0; i < strlen(p); i++) {
//            if(i % 2  == 0) {
//                printf("array[%d] address: %d\n", i, p+i);
//            }
//
//        }

//==========Truy xuất các ký tự trong chuỗi bằng con trỏ=======
//        char *a = "Hello", *p;
//        p = a;
//        printf("%c\n", a[2]);
//        printf("%c\n", *(p+2));

//=========Nhập chuỗi bằng con trỏ trong c=====
            //nhập chuỗi thông qua mảng
//            char str[100];
//            scanf("%s", str);

            //nhập chuỗi thông qua con trỏ
            char str1[100], *p;
            p = str1;
            printf("Nhập chuỗi: ");
            gets(p);
//            puts(p);
            while(*p != '\0') {
                printf("%c", *p);
                ++p;
            }
//            for(int i = 0; i < strlen(p); i++) {
//                printf("%c", *p);
//            }

            char array_str[] ="Hello";
//            char *array_str ="Hello";
}