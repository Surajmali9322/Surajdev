#include <stdio.h>

int main() {
    int num1, num2, num3, num4, num5;
    float average;

    printf("Enter 5 numbers: ");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

    average = (num1 + num2 + num3 + num4 + num5) / 5.0;

    printf("Average = %.2f\n", average);

    return 0;
}

