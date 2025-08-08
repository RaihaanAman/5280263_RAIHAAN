#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void findZigZagSequence(int arr[], int n) {
    int temp;
    
    // Step 1: sort the array
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Step 2: find mid index
    int mid = (n - 1) / 2;
    temp = arr[mid];
    arr[mid] = arr[n - 1];
    arr[n - 1] = temp;

    // Step 3: reverse second half after mid
    int st = mid + 1;
    int ed = n - 2;  // FIX: should be n - 2, not n - 1
    while (st <= ed) {
        temp = arr[st];
        arr[st] = arr[ed];
        arr[ed] = temp;
        st++;
        ed--;
    }

    // Step 4: print sequence
    for (int i = 0; i < n; i++) {
        if (i > 0) printf(" ");
        printf("%d", arr[i]);
    }
    printf("\n");
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        findZigZagSequence(arr, n);
    }
    return 0;
}
