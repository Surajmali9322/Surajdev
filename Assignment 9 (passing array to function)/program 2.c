//2. Search the given number in array.using function

#include <stdio.h>

int search(int a[],int n,int k){
    int i;
    for(i=0;i<n;i++){
        if(a[i]==k) return i;
    }
    return -1;
}

int main(){
    int n,i,k;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&k);
    int p=search(a,n,k);
    if(p==-1) printf("Not Found");
    else printf("Found at %d",p+1);
    return 0;
}

