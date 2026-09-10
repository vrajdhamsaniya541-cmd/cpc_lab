// Check whether the given number is palindrome or not
#include<stdio.h>
#include<math.h>

int main()
{
    int n, ld, rev=0, temp;
    printf("Enter a number :");
    scanf("%d",&n);
    temp=n;
    while (n!=0)
    {
        ld=n%10;
        rev=rev*10+ld;
        n=n/10;
    }
    if(rev==temp)
        printf("The number is a palindrome.");
    else
        printf("The number is not a palindrome.");
    return 0;
}