#include <stdio.h>

void swapNumbers(int *x, int *y) {
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("\nBefore swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    swapNumbers(&a, &b);

    printf("\nAfter swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
