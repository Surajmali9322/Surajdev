//4. Find odd and even among the numbers

#include<stdio.h>
void oddEven(int a[], int n){
    int i;
    for(i=0;i<n;i++){
        if(a[i]%2==0)
            printf("%d is even\n",a[i]);
        else
            printf("%d is odd\n",a[i]);
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    oddEven(arr,5);
}

