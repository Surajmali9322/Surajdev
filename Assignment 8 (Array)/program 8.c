//9. Reverse the given array

#include<stdio.h>
void reverse(int a[], int n){
    int i, t;
    for(i=0;i<n/2;i++){
        t=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=t;
    }
}
int main(){
    int arr[5]={1,2,3,4,5}, i;
    reverse(arr,5);
    for(i=0;i<5;i++)
        printf("%d ",arr[i]);
}

