#include<stdio.h>

int main() {
    int data[] = {0,11,13,14,15,17,18};
    int low = 0;
    int high = 6;
    int searchValue = 20;
    int flag = 0;

    while(low <= high) {
        int mid = (high + low)/2;
        if( searchValue == data[mid]) {
            flag = 1;
            printf("Element found at index %d\n", mid);
            break;
        } else if(searchValue < data[mid]) {
            high = mid -1;
        } else if(searchValue > data[mid]) {
            low = mid + 1;
        }
    }
    if(flag == 0) {
        printf("Element not found in the array");
    }
}