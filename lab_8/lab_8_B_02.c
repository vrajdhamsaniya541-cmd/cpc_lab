// Print all integer greater than 100 and less than 200 that are divisible by 7 but not divisible by 5
#include<stdio.h>
#include<math.h>
void main()
{
    int i=100,n=200,num;
    while (i<n)
    {
        if(i%7==0 && i%5!=0)
        {
            printf("%d", i);
        }
        i=i+1;
    }
    
}