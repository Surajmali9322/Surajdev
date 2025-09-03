#include <stdio.h>

int fact(int x) {
    int f = 1, i;
    for (i = 1; i <= x; i++) {
        f *= i;
    }
    return f;
}

int main() {
    int n, i, temp, rem, sum;
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        temp = i;
        sum = 0;
        while (temp > 0) {
            rem = temp % 10;
            sum += fact(rem);
            temp /= 10;
        }
        if (sum == i) {
            printf("%d\n", i);
        }
    }
    return 0;
}

