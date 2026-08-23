#include<stdio.h>
 void main()
 {
    int  i=1,n1,n2 ,min,max;   
    printf("Enter first no");
    scanf("%d",&n1);

    printf("Enter sec no");
    scanf("%d",&n2);

    max=(n1>n2)?(n1):(n2);
    min=(n1<n2)?(n1):(n2);

    i=min;
    while(i<=max)
    {
        if(i%2==0)
        {
            printf("%d", i);
        }
        i=i+1;
    }
 }