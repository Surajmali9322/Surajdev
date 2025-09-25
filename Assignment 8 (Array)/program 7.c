//7. Take two array and add sum in third array

#include<stdio.h>
void addArrays(int a[], int b[], int c[], int n){
    int i;
    for(i=0;i<n;i++)
        c[i]=a[i]+b[i];
}
int main(){
    int arr[5]={1,2,3,4,5};
    int brr[5]={10,20,30,40,50};
    int crr[5], i;
    addArrays(arr,brr,crr,5);
    for(i=0;i<5;i++)
        printf("%d ",crr[i]);
}

