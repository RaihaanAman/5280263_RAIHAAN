#include "demo.h"
#include <stdlib.h>

void swap(int *a, int *b){
    if(a == NULL || b == NULL) return;

    int temp = *a;
    *a = *b;
    *b = temp;
}

void reverse_array(int *arr, int size){
    if(arr == NULL || size <= 0) return;

    int *start = arr;
    int *end = arr+size-1;

    while(start<end){
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}
