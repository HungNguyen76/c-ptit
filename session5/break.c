#include<stdio.h>

int main() {
    int i = 0;
    while (1) {
        if( i > 5) {
            break;
        }
        printf("%d\n", i);
        i++;
    }
}