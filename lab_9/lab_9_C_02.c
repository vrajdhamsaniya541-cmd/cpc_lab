#include<stdio.h>
#include<math.h>

void main()
{
    int n,d, binary=0;
    printf(" Enter a  decimal number ");
    scanf("%d", &n);
    while (n!=0)
    {
        d=n%2;
        n=n/2;
    }
    binary=(binary*10)+d;
    printf("Binary %d",binary);
    
}