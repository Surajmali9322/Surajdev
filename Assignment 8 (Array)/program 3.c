//3. Find sum of all numbers.

#include<stdio.h>
int sum(int a[], int n){
    int s=0,i;
    for(i=0;i<n;i++)
        s+=a[i];
    return s;
}
int main(){
    int arr[5]={1,2,3,4,5};
    printf("%d",sum(arr,5));
}

