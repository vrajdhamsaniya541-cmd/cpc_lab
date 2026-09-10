// Check whether the given number is perfect or not.
#include<stdio.h>
#include<math.h>

void main()
{
    int n i, count;
    printf("Entre a number : ");
    scanf("%d",&n);
    while (i<=n)
    {
        if(i%n==0)
        {
            count=count+2;
        }        
    }
    printf("it is perfect number ");
}