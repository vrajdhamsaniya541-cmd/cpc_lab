#include <stdio.h>

int main()
{
    int a, b, c, smallest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a < b && a < c)
        smallest = a;
    else if (b < c)
        smallest = b;
    else
        smallest = c;

    printf("Smallest number = %d", smallest);

    return 0;
}