#include <stdio.h>

int main() {
    float price, discount = 0, finalAmount;
    char student;

    printf("Enter the price: ");
    scanf("%f", &price);

    printf("Are you a student? (y/n): ");
    scanf(" %c", &student); // space before %c to consume newline

    if (student == 'y' || student == 'Y') {
        if (price > 500)
            discount = 0.20 * price;
        else
            discount = 0.10 * price;
    }
    else {
        if (price > 600)
            discount = 0.15 * price;
        else
            discount = 0;
    }

    finalAmount = price - discount;

    printf("Discount = %.2f\n", discount);
    printf("Final amount to pay = %.2f\n", finalAmount);

    return 0;
}

