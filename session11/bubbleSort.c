#include <stdio.h>
void main() {
    int i,arr[5]={90,45,-10,89,111};
    for (int i=0; i<4; i++)
    {
        for (int j=0; j<5-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("\nThe sorted array");
    for(i=0;i<5;i++) {
        printf("\n%d", arr[i]);
    }

}