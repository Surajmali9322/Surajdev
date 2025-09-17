//sum of digit

#include <stdio.h>
void sumd(int *n)
{
    int m=*n,s=0;
    while(m){s+=m%10;m/=10;}
    printf("%d",s);
}
int main()
{
    int n;scanf("%d",&n);
    sumd(&n);
}

