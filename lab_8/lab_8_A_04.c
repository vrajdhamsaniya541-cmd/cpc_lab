#include<stdio.h>
#include<math.h>
void main()
{
    int i=1, n=10, num, even,odd;
    while (i<=n)
    {
        printf("Enter number :");
        scanf("%d",&num);
        if(num%2==0)
        {
            even=even+1;
        }
        else
        {
            odd=odd+1;
        }
        i=i+1;
    }
    printf("evev");
    printf("odd");
}