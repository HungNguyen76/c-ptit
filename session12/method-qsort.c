#include<stdio.h>
#include<stdlib.h>

int values[] = {88, 56, 100, 2, 25, 101, 4, 6, 10};

int cmpfunc(const void *a, const void *b) {
    return (*(int *)a - *(int*)b);
}
int cmp(const void *a, const void *b){
    int *x = (int*)a;
    int *y = (int*)b;
    return *x - *y;
}
int main() {
//    int n;
//    printf("Truoc khi sap xep, list co dang: \n");
//    for (n = 0; n < 9; n++) {
//        printf("%d ", values[n]);
//    }
//    qsort(values, 9, sizeof(int), cmpfunc);
//
//    printf("\n Sau khi sap xep, list co dang: \n");
//    for(n =0; n < 9; n++) {
//        printf("%d ", values[n]);
//    };
//    return 0;

//==========Sap xep mang 2 chieu voi qsort========
//        int n = 4, m = 5;
//        int a[4][5] = {
//                {3, 1, 0, 7, 2},
//                {2, 5, 10, 3, 4},
//                {3, 17, 4, 1, 7},
//                {10, 2, 0, 11, 9}
//        };

//        for(int i = 0; i < n; i++){
//            //sap xep a[i]
//            qsort(a[i], m, sizeof(int), cmp);
//        }
//        printf("Mang 2 chieu sau khi sap xep :\n");
//        for(int i = 0; i < n; i++){
//            for(int j = 0; j < m; j++){
//                printf("%d ", a[i][j]);
//            }
//            printf("\n");
//        }

//=======================qsort mang 2 chieu nhap tu ban phim===========
//1.Cho phép người dùng nhập vào giá trị x và y
//2. Cho phép người dùng nhập vào giá trị của từng phần tử trong mảng 1 chiều theo số hàng và số cột
//3. In ra màn hình mảng 2 chiều chưa được sắp xếp
//4. Sử dụng for để qsort mảng 2 chiều
//5. In ra màn hình mảng 2 chiều đã sắp xếp

        printf("===Moi ban nhap vao mang 2 chieu===\n");
        int x, y;
        printf("giá trị x của mảng 2 chiều: ");
        scanf("%d", &x);
        printf("giá trị y của mảng 2 chiều: ");
        scanf("%d",&y);

        int a[y][x];
        printf("Nhập các phần tử của mảng \n");
        for(int i = 0; i < y; i++){
            for(int j = 0; j < x; j++){
                printf("Nhập số phần tử cột: %d hàng: %d ", i, j);
                scanf("%d", &a[i][j]);
            }
        }

        printf("\nMảng trước khi sắp xếp: \n");
        for(int i = 0; i < y; i++){
            for(int j = 0; j < x; j++){
                printf("%d ", a[i][j]);
        }
            printf("\n");
        }

        for (int i = 0; i < y; i++) {
            qsort(a[i], x, sizeof(int), cmp);
        }

        printf("\nMang 2 chieu sau khi sap xep: \n");
        for(int i = 0; i < y; i++){
            for(int j = 0; j < x; j++){
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }

        return 0;
}

