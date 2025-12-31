#include <stdio.h>

int findMaximum(int *num1, int *num2) {
    if (*num1 > *num2)
        return *num1;
    else
        return *num2;
}

int main() {
    int a, b, max;

    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);

    max = findMaximum(&a, &b);

    printf("\nMaximum of %d and %d is %d", a, b, max);

    return 0;
}
