#include<stdio.h>
int a[100], n, sum;
int main(){
    while(1) {
        printf("1.Nhap\n2.In\n3.Tong chan\nchon: ");
        int chucNang;
        scanf("%d", &chucNang);
        switch (chucNang) {
            case 1:
                printf("Nhap so phan tu: ");
                scanf("%d", &n);
                for (int i = 0; i < n; i++) {
                    printf("nhap gia tri phan tu thu %d: ", i);
                    scanf("%d", &a[i]);
                }
                break;
            case 2:
                if (n == 0) printf("khong gia tri\n");
                else {
                    printf("\ngia tri cac phan tu dang quan ly: \n");
                    for (int i = 0; i < n; i++) printf("%d\n",a[i]);
                }
                break;
            case 3:
                sum = 0;
                for (int i = 0; i < n; i++) if (a[i] % 2 == 0) sum += a[i];
                printf("tong so chan: %d\n ", sum);
                break;
        }
    }
    return 0;
}