#include <stdio.h>

void evenOdd1() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    if (n % 2 == 0) printf("Even\n"); else printf("Odd\n");
}

void evenOdd2(int n) {
    if (n % 2 == 0) printf("Even\n"); else printf("Odd\n");
}

void prime1() {
    int n, i, flag = 1;
    printf("Enter number: ");
    scanf("%d", &n);
    if (n <= 1) flag = 0;
    for (i = 2; i * i <= n; i++) { if (n % i == 0) { flag = 0; break; } }
    if (flag) printf("Prime\n"); else printf("Not Prime\n");
}

void prime2(int n) {
    int i, flag = 1;
    if (n <= 1) flag = 0;
    for (i = 2; i * i <= n; i++) { if (n % i == 0) { flag = 0; break; } }
    if (flag) printf("Prime\n"); else printf("Not Prime\n");
}

void palindrome1() {
    int n, temp, rev = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    temp = n;
    while (temp > 0) { rev = rev * 10 + temp % 10; temp /= 10; }
    if (rev == n) printf("Palindrome\n"); else printf("Not Palindrome\n");
}

void palindrome2(int n) {
    int temp = n, rev = 0;
    while (temp > 0) { rev = rev * 10 + temp % 10; temp /= 10; }
    if (rev == n) printf("Palindrome\n"); else printf("Not Palindrome\n");
}

void checkSign1() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    if (n > 0) printf("Positive\n");
    else if (n < 0) printf("Negative\n");
    else printf("Zero\n");
}

void checkSign2(int n) {
    if (n > 0) printf("Positive\n");
    else if (n < 0) printf("Negative\n");
    else printf("Zero\n");
}

void reverse1() {
    int n, rev = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    while (n > 0) { rev = rev * 10 + n % 10; n /= 10; }
    printf("%d\n", rev);
}

void reverse2(int n) {
    int rev = 0;
    while (n > 0) { rev = rev * 10 + n % 10; n /= 10; }
    printf("%d\n", rev);
}

void sumDigits1() {
    int n, sum = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    while (n > 0) { sum += n % 10; n /= 10; }
    printf("%d\n", sum);
}

void sumDigits2(int n) {
    int sum = 0;
    while (n > 0) { sum += n % 10; n /= 10; }
    printf("%d\n", sum);
}

int main() {
    int n;

    evenOdd1();
    printf("Enter number: "); scanf("%d", &n); evenOdd2(n);

    prime1();
    printf("Enter number: "); scanf("%d", &n); prime2(n);

    palindrome1();
    printf("Enter number: "); scanf("%d", &n); palindrome2(n);

    checkSign1();
    printf("Enter number: "); scanf("%d", &n); checkSign2(n);

    reverse1();
    printf("Enter number: "); scanf("%d", &n); reverse2(n);

    sumDigits1();
    printf("Enter number: "); scanf("%d", &n); sumDigits2(n);

    return 0;
}

