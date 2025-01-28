#include <stdio.h>

int main() {
    float basic_salary, hra, da, gross_salary;

    printf("Enter the basic salary of the employee: ");
    scanf("%f", &basic_salary);

    hra = 0.20 * basic_salary; 
    da = 0.50 * basic_salary;  

    gross_salary = basic_salary + hra + da;

    
    printf("The Gross Salary of the employee is: %.2f\n", gross_salary);

    return 0;
}
