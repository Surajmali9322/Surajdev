#include <stdio.h>

int main() {
    int n, temp, remainder, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    while(temp != 0) {
        remainder = temp % 10;
        rev = rev * 10 + remainder;
        temp /= 10;
    }

    if(rev == n)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}

