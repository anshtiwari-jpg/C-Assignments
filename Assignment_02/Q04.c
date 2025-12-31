#include <stdio.h>

int main() {
    float balance;

    printf("Enter initial account balance: ");
    scanf("%f", &balance);

    balance += 1000;   
    printf("After adding interest: %.2f\n", balance);

    balance -= 500;    
    printf("After maintenance charge deduction: %.2f\n", balance);

    balance *= 1.10;   
    printf("After applying bonus factor: %.2f\n", balance);

    balance /= 2;      
    printf("Balance in each linked account: %.2f\n", balance);

    return 0;
}
