//#include<stdio.h>
//
//
//int string_ln(char*);
//
//int main() {
//    char str[20];
//    int length;
//
//    printf("\nNhap chuoi bat ky: ");
//    scanf("%s", str);
//
//    length = string_ln(str);
//    printf("\nDo dai chuoi %s la: %d", str, length);
//    return(0);
//}
//
//int string_ln(char*p) /* p=&str[0] */
//{
//    int count = 0;
//    while (*p != '\0') {
//        count++;
//        p++;
//    }
//    return count;
//}


#include <stdio.h>
int main() {
    char a[100];
    char *b = a;
    int length = 0;
    printf("Nhap chuoi:");
    fgets(a, sizeof(a), stdin);
    while(*b != '\0') {
        length++;
        b++;
    }
    printf("do dai cua chuoi la: %d", length );
    return 0;
}

//#include<stdio.h>
//
//int str_ln(char*);
//
//int main() {
//    char str[20];
//    int length;
//
//    printf("\nNhap chuoi bat ky: ");
//    gets(str);
//
//    length = str_ln(str);
//    printf("\nDo dai chuoi %s la: %d", str, length);
//    return(0);
//}
//
//int str_ln(char*p)
//{
//    int i = 0;
//    while (*p != '\0') {
//        i++;
//        p++;
//    }
//    return i;
//}