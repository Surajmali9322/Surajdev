//8. Merge two arrays

#include<stdio.h>
void merge(int a[], int n, int b[], int m, int c[]){
    int i,j;
    for(i=0;i<n;i++) c[i]=a[i];
    for(j=0;j<m;j++) c[i+j]=b[j];
}
int main(){
    int arr[3]={1,2,3};
    int brr[2]={4,5};
    int crr[5], i;
    merge(arr,3,brr,2,crr);
    for(i=0;i<5;i++)
        printf("%d ",crr[i]);
}

