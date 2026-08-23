#include <stdio.h>

int main()
{
    int days, years, weeks, remainingDays;

    printf("Enter number of days: ");
    scanf("%d", &days);

    years = days / 365;
    remainingDays = days % 365;

    weeks = remainingDays / 7;
    remainingDays = remainingDays % 7;

    printf("%d days = %d year(s), %d week(s) and %d day(s)",
           days, years, weeks, remainingDays);

    return 0;
}