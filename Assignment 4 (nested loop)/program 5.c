#include <stdio.h>

int main() {
    int choice, n, i, rev, temp, sum, flag;

    scanf("%d", &n);
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            if (n % 2 == 0)
                printf("Even\n");
            else
                printf("Odd\n");
            break;

        case 2:
            flag = 1;
            if (n <= 1) flag = 0;
            for (i = 2; i * i <= n; i++) {
                if (n % i == 0) {
                    flag = 0;
                    break;
                }
            }
            if (flag)
                printf("Prime\n");
            else
                printf("Not Prime\n");
            break;

        case 3:
            temp = n;
            rev = 0;
            while (temp > 0) {
                rev = rev * 10 + temp % 10;
                temp /= 10;
            }
            if (rev == n)
                printf("Palindrome\n");
            else
                printf("Not Palindrome\n");
            break;

        case 4:
            if (n > 0)
                printf("Positive\n");
            else if (n < 0)
                printf("Negative\n");
            else
                printf("Zero\n");
            break;

        case 5:
            temp = n;
            rev = 0;
            while (temp > 0) {
                rev = rev * 10 + temp % 10;
                temp /= 10;
            }
            printf("%d\n", rev);
            break;

        case 6:
            temp = n;
            sum = 0;
            while (temp > 0) {
                sum += temp % 10;
                temp /= 10;
            }
            printf("%d\n", sum);
            break;

        default:
            printf("Invalid Choice\n");
    }
    return 0;
}

