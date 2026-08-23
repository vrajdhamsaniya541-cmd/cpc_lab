#include<stdio.h>
int main()
{
    int a;int b;int c;
    printf("Give a number A:");
    scanf("%d",&a);
    
    printf("Give a number B:");
    scanf("%d",&b);

    printf("Give a number C:");
    scanf("%d",&c);

    int sum=a+b+c;
    printf("sum %d=",(sum)/3);

}