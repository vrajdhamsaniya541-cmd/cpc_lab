#include <stdio.h>

int main()
{
    float m1, m2, m3, m4, m5;
    float percentage, total;

    printf("Enter marks of five subjects: ");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5;

    printf("Percentage = %.2f%%\n", percentage);

    if (percentage < 35)
        printf("Fail");
    else if (percentage <= 45)
        printf("Pass Class");
    else if (percentage <= 60)
        printf("Second Class");
    else if (percentage <= 70)
        printf("First Class");
    else
        printf("Distinction");

    return 0;
}