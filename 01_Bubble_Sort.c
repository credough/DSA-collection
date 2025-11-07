#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[] = {4,5,7,6,1,3};

    printf("The unsorted array: \n");
    for(int i = 0; i < 6; i++){
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    printf("The sorted array using Bubble Sort:\n");
    for(int i = 0; i < 7; i++){
        for(int j = 0; j < 6; j++){
        if(arr[j] > arr[i]){
            int temp = 0;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        }
    }
    for (int j = 0; j < 6; j++){
        printf("arr[%d] = %d\n", j, arr[j]);
    }


    return 0;
}
