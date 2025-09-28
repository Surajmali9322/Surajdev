//8. Merge two arrays using function

#include<stdio.h>
void merge(int a[],int b[],int c[],int n,int m)
{
    int i,j=0;
    for(i=0;i<n;i++) c[j++]=a[i];
    for(i=0;i<m;i++) c[j++]=b[i];
}
int main()
{
    int n,m,i;
    scanf("%d%d",&n,&m);
    int a[n],b[m],c[n+m];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<m;i++) scanf("%d",&b[i]);
    merge(a,b,c,n,m);
    for(i=0;i<n+m;i++) printf("%d ",c[i]);
}

