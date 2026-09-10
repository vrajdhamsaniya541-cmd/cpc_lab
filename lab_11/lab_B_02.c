// Count frequency of digits in an integer

#include<stdio.h>

void main()

{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    for(int i=0 ; i<10 ;i++)
        int temp=0 ,count=0;

        while(temp !=0){
         int digit = temp%10;
         if(digit==1)
         {
            count++;
         }
         temp%10;
        }
        printf("Frequnct of %d  = %d\n",i, count);
}