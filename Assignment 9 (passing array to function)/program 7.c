//7. Take two array and add sum in third array using function

#include<stdio.h>
void add(int a[],int b[],int c[],int n)
{
    int i;
    for(i=0;i<n;i++) c[i]=a[i]+b[i];
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n],b[n],c[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<n;i++) scanf("%d",&b[i]);
    add(a,b,c,n);
    for(i=0;i<n;i++) printf("%d ",c[i]);
}

