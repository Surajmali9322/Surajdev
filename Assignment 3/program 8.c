#include <stdio.h>

int main() {
    int n, temp, remainder, i, fact, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    while(temp != 0) {
        remainder = temp % 10;
        fact = 1;
        for(i = 1; i <= remainder; i++) {
            fact *= i;
        }
        sum += fact;
        temp /= 10;
    }

    if(sum == n)
        printf("Strong");
    else
        printf("Not Strong");

    return 0;
}

