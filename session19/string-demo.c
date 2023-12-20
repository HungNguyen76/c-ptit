#include<stdio.h>
#include<string.h>

int main() {
    //khai báo chuỗi
//    char s[5];
    //gán giá trị cho chuỗi s
//    s[0]='p';
//    s[1]='h';
//    s[2]='u';
//    s[3]='c';

    //có 3 cách khởi tạo chuỗi trong C
    //cách 1:
//    char a[5] = "value";
    //cách 2:
//    char a[] = "value";
    //cách 3:
//    char a[] = {'v', 'a', 'l', 'u', 'e', '\0'};
//    printf("%s", s);

//    char str1[] = "C";
//    char str2[] = "Hoc lap trinh C++";
//    char str3[] = "C#";
//    char str4[] = "đế";
//    char str5[] = "I love C/C++";
//    int len;
//    len = strlen(str4);
//    str2[1] = '-';
//    str2[2] = '-';
//    printf("str2: %s",str2);
//    printf("%s", &str2[4]);
//    printf("%.3s", str2);
//    printf("Length of \"%s\" is %d.\n", str4, len);

    char str5[]="Thay Hung";
    char str6[]=" handsome";
    strcat(str5,str6);
    printf("Chuoi: %s",str5);
}