// Print all uppercase and lowercase alphabets
#include<stdio.h>
#include<math.h>

void main()
{
    int uc=65, us=90, lc=97, ls=122;
    printf("Upper case : ");
    while (uc<=us)
    {
        printf("%c   ", uc);
        uc++;
    }
    printf("\nLower Case : ");
    while (lc<=ls)
    {
        printf("%c   ",lc);
        lc++;
    }
}