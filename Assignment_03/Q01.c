#include <stdio.h>

int main() {
    char ch;
    int i, j;

    printf("Alphabets from A to Z in star pattern:\n\n");

    for (ch = 'A'; ch <= 'Z'; ch++) {
        printf("Alphabet %c:\n", ch);

        for (i = 1; i <= 5; i++) {
            for (j = 1; j <= 5; j++) {
                printf("* ");
            }
            printf("\n");
        }

        printf("\n");
    }

    return 0;
}
