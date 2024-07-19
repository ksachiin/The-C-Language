#include <stdio.h>

float calculate_gross_salary(float base_salary, float hra_percent, float da_percent, float ta_percent) {
    float hra_amount = base_salary * (hra_percent / 100);
    float da_amount = base_salary * (da_percent / 100);
    float ta_amount = base_salary * (ta_percent / 100);
    
    float gross_salary = base_salary + hra_amount + da_amount + ta_amount;
    return gross_salary;
}

int main() {
    float base_salary, hra_percent, da_percent, ta_percent;

    printf("Enter Base Salary: ");
    scanf("%f", &base_salary);

    printf("Enter HRA percentage: ");
    scanf("%f", &hra_percent);

    printf("Enter DA percentage: ");
    scanf("%f", &da_percent);

    printf("Enter TA percentage: ");
    scanf("%f", &ta_percent);

    float gross_salary = calculate_gross_salary(base_salary, hra_percent, da_percent, ta_percent);
    
    printf("Gross Salary: Rs. %.2f\n", gross_salary);

    return 0;
}
