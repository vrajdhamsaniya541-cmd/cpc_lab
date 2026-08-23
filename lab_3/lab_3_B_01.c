#include <stdio.h>

int main()
{
    float units, bill, surcharge, total;

    printf("Enter electricity units: ");
    scanf("%f", &units);

    if (units <= 50)
    {
        bill = units * 0.50;
    }
    else if (units <= 150)
    {
        bill = (50 * 0.50) + ((units - 50) * 0.75);
    }
    else if (units <= 250)
    {
        bill = (50 * 0.50) + (100 * 0.75)
             + ((units - 150) * 1.20);
    }
    else
    {
        bill = (50 * 0.50) + (100 * 0.75)
             + (100 * 1.20)
             + ((units - 250) * 1.50);
    }

    surcharge = bill * 0.20;
    total = bill + surcharge;

    printf("Electricity Bill = Rs. %.2f\n", bill);
    printf("Surcharge = Rs. %.2f\n", surcharge);
    printf("Total Bill = Rs. %.2f\n", total);

    return 0;
}