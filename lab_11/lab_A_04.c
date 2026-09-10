//Calculate without using power function
#include<stdio.h>

void main()
{
    int x ,z ;
    printf("Enter  Base : ");
    scanf("%d",&x);
    printf("Enter Power : ");
    scanf("%d",&z);
    int ans=1;
    for ( int i=1; i<=z ;i++)
    {
        ans= ans*x;
    }
    printf("%d",ans);
}