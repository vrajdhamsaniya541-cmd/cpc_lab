//1. Print sum of series 1 – 2 + 3 – 4 + 5 – 6 + 7 … n.
#include <stdio.h>
#include<math.h>
int main()
{
    int n, i, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        if(i % 2 == 0)
            sum = sum - i;
        else
            sum = sum + i;
    }
    
    printf("Sum = %d", sum);

    return 0;
}