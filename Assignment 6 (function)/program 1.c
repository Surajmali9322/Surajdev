#include <stdio.h>

void evenOdd1() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");
}

void evenOdd2(int n) {
    if (n % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");
}

int evenOdd3() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    return n % 2;
}

int evenOdd4(int n) {
    return n % 2;
}

int main() {
    int n, result;

    printf("Type 1:\n");
    evenOdd1();

    printf("Type 2:\n");
    printf("Enter a number: ");
    scanf("%d", &n);
    evenOdd2(n);

    printf("Type 3:\n");
    result = evenOdd3();
    if (result == 0)
        printf("Even\n");
    else
        printf("Odd\n");

    printf("Type 4:\n");
    printf("Enter a number: ");
    scanf("%d", &n);
    result = evenOdd4(n);
    if (result == 0)
        printf("Even\n");
    else
        printf("Odd\n");

    return 0;
}

