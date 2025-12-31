#include <stdio.h>

int main() {
    int number = 25;
    float marks = 95.63;
    char grade = 'A';
    double salary = 5488.50;

    printf("Displaying values and sizes of different data types:\n\n");

    printf("Integer value = %d\n", number);
    printf("Size of int = %lu bytes\n\n", sizeof(number));

    printf("Float value = %.2f\n", marks);
    printf("Size of float = %lu bytes\n\n", sizeof(marks));

    printf("Character value = %c\n", grade);
    printf("Size of char = %lu byte\n\n", sizeof(grade));

    printf("Double value = %.2lf\n", salary);
    printf("Size of double = %lu bytes\n", sizeof(salary));

    return 0;
}
