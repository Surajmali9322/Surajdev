//3. Find sum of all numbers.using function

#include <stdio.h>

int sum(int a[],int n){
    int s=0,i;
    for(i=0;i<n;i++) s+=a[i];
    return s;
}

int main(){
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    printf("%d",sum(a,n));
    return 0;
}

