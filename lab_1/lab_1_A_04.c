#include <stdio.h>

int main()
{
    float base, height, area;

    printf("Enter base: ");
    scanf("%f", &base);

    printf("Enter height: ");
    scanf("%f", &height);

    area = (height * base) / 2;

    printf("Area of triangle = %.2f", area);

    return 0;
}