#include <stdio.h>

int main() {
    int start, end, sum;

    printf("Enter start: ");
    scanf("%d", &start);
    printf("Enter end: ");
    scanf("%d", &end);

    sum = (end * (end + 1)) / 2 - ((start - 1) * start) / 2;

    printf("Sum = %d", sum);

    return 0;
}

