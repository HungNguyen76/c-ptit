#include<stdio.h>

int main() {
    int data[] ={5,2,9,7,6,10};
    int a = 7;
    int i;
    for(i = 0; i < 6; i++) {
        if(a == data[i]) {
            break;
        }
    }
    printf("Number %d found at position %d", a, i);

}