#include <stdio.h>
#include <math.h>

int main() {
    int n, i, temp, rem, digits, sum;
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        temp = i;
        sum = 0;
        digits = 0;

        int t = temp;
        while (t > 0) {
            digits++;
            t /= 10;
        }

        t = temp;
        while (t > 0) {
            rem = t % 10;
            sum += pow(rem, digits);
            t /= 10;
        }

        if (sum == i) {
            printf("%d\n", i);
        }
    }
    return 0;
}

