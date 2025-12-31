#include <stdio.h>

int main() {
    int firstNumber, secondNumber;

    printf("Enter the first integer: ");
    scanf("%d", &firstNumber);

    printf("Enter the second integer: ");
    scanf("%d", &secondNumber);

    printf("\nResults of Arithmetic Operations:\n");
    printf("Addition = %d\n", firstNumber + secondNumber);
    printf("Subtraction = %d\n", firstNumber - secondNumber);
    printf("Multiplication = %d\n", firstNumber * secondNumber);
    printf("Division = %d\n", firstNumber / secondNumber);
    printf("Modulus = %d\n", firstNumber % secondNumber);

    return 0;
}
