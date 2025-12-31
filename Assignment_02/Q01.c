#include <stdio.h>

int main() {
    char name[30];
    float basicSalary, hra, da, grossSalary, incomeTax, netSalary;

    printf("Enter Employee Name: ");
    scanf("%s", name);

    printf("Enter Basic Salary: ");
    scanf("%f", &basicSalary);

    hra = basicSalary * 0.20;
    da = basicSalary * 0.10;
    grossSalary = basicSalary + hra + da;
    incomeTax = grossSalary * 0.05;
    netSalary = grossSalary - incomeTax;

    printf("\n--- Salary Details ---\n");
    printf("Employee Name   : %s\n", name);
    printf("Basic Salary    : %.2f\n", basicSalary);
    printf("HRA (20%%)       : %.2f\n", hra);
    printf("DA (10%%)        : %.2f\n", da);
    printf("Gross Salary    : %.2f\n", grossSalary);
    printf("Income Tax (5%%) : %.2f\n", incomeTax);
    printf("Net Salary      : %.2f\n", netSalary);

    return 0;
}
