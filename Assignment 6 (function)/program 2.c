#include <stdio.h>

int fact(int x) {
    int f = 1;
    for (int i = 1; i <= x; i++) f *= i;
    return f;
}

void perfect1() {
    int n, i, sum = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    for (i = 1; i < n; i++) if (n % i == 0) sum += i;
    if (sum == n) printf("Perfect\n"); else printf("Not Perfect\n");
}

void perfect2(int n) {
    int i, sum = 0;
    for (i = 1; i < n; i++) if (n % i == 0) sum += i;
    if (sum == n) printf("Perfect\n"); else printf("Not Perfect\n");
}

int perfect3() {
    int n, i, sum = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    for (i = 1; i < n; i++) if (n % i == 0) sum += i;
    return sum == n;
}

int perfect4(int n) {
    int i, sum = 0;
    for (i = 1; i < n; i++) if (n % i == 0) sum += i;
    return sum == n;
}

void strong1() {
    int n, temp, sum = 0, d;
    printf("Enter number: ");
    scanf("%d", &n);
    temp = n;
    while (temp > 0) { d = temp % 10; sum += fact(d); temp /= 10; }
    if (sum == n) printf("Strong\n"); else printf("Not Strong\n");
}

void strong2(int n) {
    int temp = n, sum = 0, d;
    while (temp > 0) { d = temp % 10; sum += fact(d); temp /= 10; }
    if (sum == n) printf("Strong\n"); else printf("Not Strong\n");
}

int strong3() {
    int n, temp, sum = 0, d;
    printf("Enter number: ");
    scanf("%d", &n);
    temp = n;
    while (temp > 0) { d = temp % 10; sum += fact(d); temp /= 10; }
    return sum == n;
}

int strong4(int n) {
    int temp = n, sum = 0, d;
    while (temp > 0) { d = temp % 10; sum += fact(d); temp /= 10; }
    return sum == n;
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

int palindrome3() {
    int n, temp, rev = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    temp = n;
    while (temp > 0) { rev = rev * 10 + temp % 10; temp /= 10; }
    return rev == n;
}

int palindrome4(int n) {
    int temp = n, rev = 0;
    while (temp > 0) { rev = rev * 10 + temp % 10; temp /= 10; }
    return rev == n;
}

int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) result *= base;
    return result;
}

void armstrongRange1() {
    int n, i, temp, d, count, sum;
    printf("Enter limit: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        temp = i; count = 0; sum = 0;
        while (temp > 0) { count++; temp /= 10; }
        temp = i;
        while (temp > 0) { d = temp % 10; sum += power(d, count); temp /= 10; }
        if (sum == i) printf("%d ", i);
    }
    printf("\n");
}

void armstrongRange2(int n) {
    int i, temp, d, count, sum;
    for (i = 1; i <= n; i++) {
        temp = i; count = 0; sum = 0;
        while (temp > 0) { count++; temp /= 10; }
        temp = i;
        while (temp > 0) { d = temp % 10; sum += power(d, count); temp /= 10; }
        if (sum == i) printf("%d ", i);
    }
    printf("\n");
}

void primeRange1() {
    int n, i, j, flag;
    printf("Enter limit: ");
    scanf("%d", &n);
    for (i = 2; i <= n; i++) {
        flag = 1;
        for (j = 2; j * j <= i; j++) if (i % j == 0) { flag = 0; break; }
        if (flag) printf("%d ", i);
    }
    printf("\n");
}

void primeRange2(int n) {
    int i, j, flag;
    for (i = 2; i <= n; i++) {
        flag = 1;
        for (j = 2; j * j <= i; j++) if (i % j == 0) { flag = 0; break; }
        if (flag) printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int n;

    printf("Perfect Number:\n");
    perfect1();
    printf("Enter number: "); scanf("%d", &n); perfect2(n);
    if (perfect3()) printf("Perfect\n"); else printf("Not Perfect\n");
    printf("Enter number: "); scanf("%d", &n); if (perfect4(n)) printf("Perfect\n"); else printf("Not Perfect\n");

    printf("\nStrong Number:\n");
    strong1();
    printf("Enter number: "); scanf("%d", &n); strong2(n);
    if (strong3()) printf("Strong\n"); else printf("Not Strong\n");
    printf("Enter number: "); scanf("%d", &n); if (strong4(n)) printf("Strong\n"); else printf("Not Strong\n");

    printf("\nPalindrome:\n");
    palindrome1();
    printf("Enter number: "); scanf("%d", &n); palindrome2(n);
    if (palindrome3()) printf("Palindrome\n"); else printf("Not Palindrome\n");
    printf("Enter number: "); scanf("%d", &n); if (palindrome4(n)) printf("Palindrome\n"); else printf("Not Palindrome\n");

    printf("\nArmstrong Numbers in Range:\n");
    armstrongRange1();
    printf("Enter limit: "); scanf("%d", &n); armstrongRange2(n);

    printf("\nPrime Numbers in Range:\n");
    primeRange1();
    printf("Enter limit: "); scanf("%d", &n); primeRange2(n);

    return 0;
}

