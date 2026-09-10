// Find factorial of the given number
#include<stdio.h>
#include<math.h>

void main()
{
    int n1, i=1 ,factoral=1;
    printf("Enter a number : ");
    scanf("%d",&n1);
     while (i<=n1)
     {
        factoral=factoral*i;
        i=i+1;
     }
     printf("%d! = %d ",n1,factoral);
}