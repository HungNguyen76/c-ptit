#include <stdio.h>

int sum(int);

int main() {
    int number, result;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    result = sum(number);
    printf("sum = %d", result);
    return 0;
}

int sum(int n) {
    if(n != 0) {
        // sum() function calls itself
        // n=1 ==> 1 + 0
        // n= 2 ==> 2 + 1
        // n =3 ==> 3 + 3
        // n = 4 ==> 4 + 6 = 10

        return n + sum(n-1);
    } else {
        return n;
    }
}