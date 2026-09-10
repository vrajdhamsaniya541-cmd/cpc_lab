//c) 5 54 543 5432 54321

#include<stdio.h>

void main()
{
    int n,k;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
   {
    k=n;
    for(int j=1 ; j<=i ; j++)
    {
        printf("%d",k);
        k--;
    }
    printf("\n");
   }
}