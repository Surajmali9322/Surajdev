//5. Print alternate elements in array using function

#include<stdio.h>
void alt(int a[],int n)
{
    int i;
    for(i=0;i<n;i+=2) printf("%d ",a[i]);
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    alt(a,n);
}

