#include <stdio.h>

int main() {
    int x = 5;
    int result;

    printf("Initial value of x = %d\n\n", x);

    /* Pre-increment example */
    result = ++x;
    printf("Using pre-increment (++x):\n");
    printf("Value of x = %d\n", x);
    printf("Value of result = %d\n\n", result);

    /* Reset value of x */
    x = 5;

    /* Post-increment example */
    result = x++;
    printf("Using post-increment (x++):\n");
    printf("Value of x = %d\n", x);
    printf("Value of result = %d\n", result);

    return 0;
}
