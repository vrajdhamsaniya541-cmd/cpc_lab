 //Print multiplication table of a given number.
#include<stdio.h>
#include<math.h>

void main()
{
    int  i=1,n1;
     printf("Enter a number :");
     scanf("%d" , &n1);
     while (n1<=1)
     {
        printf("%d * %d = %d\n",n1, i,(n1*i));

     }
     
     
}