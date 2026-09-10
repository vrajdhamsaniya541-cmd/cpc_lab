//Find factorial of the given number

#include<stdio.h>
#include<math.h>

void main()
{
    int n1, i=1 ,factoral=1;
    printf("Enter a number : ");
    scanf("%d",&n1);
     for (int i=1;i<=n1;i++)
     {
        factoral=factoral*i;
     }
     printf("%d! = %d ",n1,factoral);
}
