#include <stdio.h>
#include <math.h>

int main()
{
    int h, m;
    float angle;

    printf("Enter hour: ");
    scanf("%d", &h);

    printf("Enter minute: ");
    scanf("%d", &m);

    angle = fabs(30 * h - 5.5 * m);

    if (angle > 180)
    {
        angle = 360 - angle;
    }

    printf("Angle = %.2f degrees", angle);

    return 0;
}