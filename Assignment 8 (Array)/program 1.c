//1. Find minimum and maximum number in array.

#include <stdio.h>

void findMinMax(int a[], int n) {
    int min=a[0], max=a[0], i;
    for(i=1; i<n; i++) {
        if(a[i]<min) min=a[i];
        if(a[i]>max) max=a[i];
    }
    printf("Min=%d Max=%d",min,max);
}

int main() {
    int a[]={5,2,9,1,7};
    findMinMax(a,5);
    return 0;
}

