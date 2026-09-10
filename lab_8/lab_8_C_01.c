#include <stdio.h>
#include<math.h>
int main()
{
    int n, i, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        sum = sum + (i * i);
    }

    printf("Sum = %d", sum);

    return 0;
}