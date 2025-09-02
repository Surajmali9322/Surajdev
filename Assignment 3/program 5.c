#include <stdio.h>
#include <math.h>

int main() {
    int n, temp, remainder, digits = 0;
    int result = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = n;
    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, digits);
        temp /= 10;
    }

    if (result == n)
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}

