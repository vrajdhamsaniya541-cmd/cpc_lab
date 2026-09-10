// Find whether the given number is prime or not using flag.
#include<stdio.h>
#include<math.h>

void main()
{
    int i,n, count=0,flag=0;
     printf("Enter a number :");
     scanf("%d",&n);
    while (i<=n && flag==0)
{
    if (n%i==0)
    {
        count++;
        if (count>2)
        {
            flag=1;
        }
        
    }
    if (flag==1)
    {
        printf("it is Prime");
        return ;
    }
  i++;  
}
printf("not prime no");
}