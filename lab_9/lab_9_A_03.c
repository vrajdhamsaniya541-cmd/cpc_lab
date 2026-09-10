// Calculate without using power function
#include<stdio.h>
#include<math.h>

void main()
{
    int x ,z,i=1,power=1;
    printf("Enter a number : ");
    scanf("%d %d",x,z);
    while (1<=z)
    {
        power=power*x;
        i=i+1;
    }
    printf("%d^%d=%d",x ,z ,power);
}