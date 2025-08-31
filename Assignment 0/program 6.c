#include <stdio.h>

int main() {
    int num, square, cube;

    printf("Enter a number: ");
    scanf("%d", &num);

    cube = num * num * num;

    printf("Cube of %d = %d\n", num, cube);

    return 0;
}


