//6. Accept array and print only prime numbers of array

#include<stdio.h>
int isPrime(int n){
    int i;
    if(n<2) return 0;
    for(i=2;i*i<=n;i++)
        if(n%i==0) return 0;
    return 1;
}
void printPrimes(int a[], int n){
    int i;
    for(i=0;i<n;i++)
        if(isPrime(a[i]))
            printf("%d ",a[i]);
}
int main(){
    int arr[5]={1,2,3,4,5};
    printPrimes(arr,5);
}

