//1. Find minimum and maximum number in array.using function

#include <stdio.h>

void findMinMax(int arr[], int n) {
    int min = arr[0], max = arr[0];
    int i;
    for(i = 1; i < n; i++) {
        if(arr[i] < min) min = arr[i];
        if(arr[i] > max) max = arr[i];
    }
    printf("Min = %d\nMax = %d\n", min, max);
}

int main() {
    int n, i;
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);
    findMinMax(arr, n);
    return 0;
}

