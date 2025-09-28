//6. Accept array and print only prime numbers of array using function

#include<stdio.h>
int prime(int n)
{
    int i;
    if(n<2) return 0;
    for(i=2;i<=n/2;i++) if(n%i==0) return 0;
    return 1;
}
void show(int a[],int n)
{
    int i;
    for(i=0;i<n;i++) if(prime(a[i])) printf("%d ",a[i]);
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    show(a,n);
}

