//Find the sum and average of different numbers which are accepted by user as many as user wants
#include<stdio.h>
#include<math.h>

void main()
{
    int n , flag , count,  r=1;
    float avg , sum;
    printf("Continu :1 and termenate :0");
    while (flag==1)
    {
        printf("Enter N :");
        scanf("%d",&n);
        sum=sum+n;
        avg=(sum)/r;
        r++;
        printf("Enter a value of flag : ");
        scanf("%d",&n);
    }
    printf("Sum",&n);

}