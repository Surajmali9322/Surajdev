//4. Find odd and even among the numbers using function

#include <stdio.h>

void oddEven(int a[],int n){
    int i;
    for(i=0;i<n;i++){
        if(a[i]%2==0) printf("%d Even\n",a[i]);
        else printf("%d Odd\n",a[i]);
    }
}

int main(){
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    oddEven(a,n);
    return 0;
}

