// Find factors of the given number
#include<stdio.h>
#include<math.h>

void main()
{
    int n1, i=1 ,factors=1;
    printf("Enter a number : ");
    scanf("%d",&n1);
     while (i<=n1)
     {
        if(n1%i==0)
        {
            factors=factors%i;
        }
        i=i+1;
     }
     printf("%d = %d ",n1,factors);
}
