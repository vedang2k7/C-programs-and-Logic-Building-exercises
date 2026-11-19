// This program calculates an employee's bonus based on their monthly salary and completed years of service.
#include <stdio.h>
#include <stdlib.h>

void CalculateBonus(float fSalary, int iYears)
{
    float fBonus = 0.0f;

    if (fSalary <= 0 || iYears < 0)
    {
        printf("Invalid Input");
        return;
    }
    else if (iYears > 10)
    {
        fBonus = fSalary * 15 / 100.0f;
    }
    else if (iYears >= 5)
    {
        fBonus = fSalary * 10 / 100.0f;
    }
    else
    {
        fBonus = fSalary * 5 / 100.0f;
    }

    printf("Bonus = %.2f", fBonus);
}

int main()
{
    float fSalary = 0.0f;
    int iYears = 0;

    printf("Enter salary and years of service: ");
    scanf("%f %d", &fSalary, &iYears);

    CalculateBonus(fSalary, iYears);

    return EXIT_SUCCESS;
}