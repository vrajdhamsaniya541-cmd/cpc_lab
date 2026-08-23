#include<stdio.h>
void main()
{
    int i=1 ,n;
    printf("Enter a number :");
    scanf("%d",&n);
    while(i>=n)
    {
        printf("%d",i);
        i=i+1;
    }
}