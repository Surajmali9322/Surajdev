#include <stdio.h>

int main() {
    float sub1, sub2, sub3, sub4, sub5;
    float total, percentage;

    printf("Enter marks of Subject 1: ");
    scanf("%f", &sub1);

    printf("Enter marks of Subject 2: ");
    scanf("%f", &sub2);

    printf("Enter marks of Subject 3: ");
    scanf("%f", &sub3);

    printf("Enter marks of Subject 4: ");
    scanf("%f", &sub4);

    printf("Enter marks of Subject 5: ");
    scanf("%f", &sub5);

    total = sub1 + sub2 + sub3 + sub4 + sub5;

    printf("\nTotal Marks = %.2f", total);
    printf("\nPercentage  = %.2f%%\n", percentage);

    return 0;
}

