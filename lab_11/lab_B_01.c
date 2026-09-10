//Print the Fibonacci Series

#include<stdio.h>

void main()

{
    int a=0, b=1 , n , c;

    printf("Enter a number");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++)
    {   
        c=a+b;
        a=b;
        b=c;
        printf("%d\n",c);
    }
}