//5. Print alternate elements in array

#include<stdio.h>
void printAlternate(int a[], int n){
    int i;
    for(i=0;i<n;i+=2)
        printf("%d ",a[i]);
}
int main(){
    int arr[5]={1,2,3,4,5};
    printAlternate(arr,5);
}

