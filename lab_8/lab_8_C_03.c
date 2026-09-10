#include <stdio.h>
#include<math.h>
int main()
{
    int a, b, result = 0, i;

    printf("Enter two numbers: ");
    scanf("%d ,%d", &a, &b);

    for(i = 1; i <= b; i++)
    {
        result = result + a;
    }

    printf("Multiplication = %d", result);

    return 0;
}