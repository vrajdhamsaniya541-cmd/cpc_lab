#include <stdio.h>

int main()
{
    float principal, roi, time, simple_interest;

    printf("Enter Principal: ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest: ");
    scanf("%f", &roi);

    printf("Enter Time Period: ");
    scanf("%f", &time);

    simple_interest = (principal * roi * time) / 100;

    printf("Simple Interest = %.2f", simple_interest);

    return 0;
}