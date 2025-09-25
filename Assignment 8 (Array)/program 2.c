//2. Search the given number in array.

#include <stdio.h>

int main() {
    int a[]={5,2,9,1,7}, n=5, key, i, found=0;
    printf("Enter number to search: ");
    scanf("%d",&key);
    for(i=0;i<n;i++) {
        if(a[i]==key) {
            printf("Found at position %d\n",i);
            found=1;
            break;
        }
    }
    if(!found) printf("Not Found\n");
    return 0;
}

