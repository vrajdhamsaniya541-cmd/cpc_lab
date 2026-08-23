#include <stdio.h>
#include <math.h>

int main()
{
    float x1, y1, x2, y2, distance;

    printf("Enter x1 and y1: ");
    scanf("%f %f", &x1, &y1);

    printf("Enter x2 and y2: ");
    scanf("%f %f", &x2, &y2);

    distance = sqrt((x2 - x1) * (x2 - x1) +
                    (y2 - y1) * (y2 - y1));

    printf("Distance between two points = %.2f", distance);

    return 0;
}