//10. Sort the array

#include<stdio.h>
void sort(int a[], int n){
    int i,j,t;
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
            if(a[i]>a[j]){
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
}
int main(){
    int arr[5]={5,2,4,1,3}, i;
    sort(arr,5);
    for(i=0;i<5;i++)
        printf("%d ",arr[i]);
}


