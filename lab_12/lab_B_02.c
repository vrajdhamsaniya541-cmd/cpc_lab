// Estimate the value of the mathematical constant e. (Formula: e=1+1/1!+1/2!+1/3!+1/4!)  

#include<stdio.h>
void main()

{
    float n, sum=1 , fact=1 ;
    printf("Enter a number : ");
    scanf("%f",&n);
    for(int i=1; i<=n; i++)
   {
    for(int j=1 ; j<=i ; j++)
    {
        fact=fact*j;
        
    }
    sum=sum+(1/fact);
}
printf(" ANS : %0.20f",sum);
}