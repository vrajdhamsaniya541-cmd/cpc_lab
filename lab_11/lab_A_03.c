// Print multiplication table of a given number.
#include<stdio.h>
#include<math.h>

void main()
{
    int n1;
     printf("Enter a number :");
     scanf("%d" , &n1);
     for(int i=1; i<=10; i++)
     {
        printf("%d * %d = %d\n",n1, i,(n1*i));

     }
     
     
}