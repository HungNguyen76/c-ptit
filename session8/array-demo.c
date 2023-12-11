#include <stdio.h>

int main() {
    int number[5];
    printf("Enter 5 integer numbers: \n");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &number[i]);
    }
    printf("\nDisplay array: ");
    for(int i = 0; i < 5; ++i) {
        printf("%d ", number[i]);
    }
    return 0;
}