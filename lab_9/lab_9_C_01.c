// 1. Convert given number in words. (i.e. n=3456  output: Three Four Five Six)
#include<stdio.h>
#include<math.h>

void main()
{
       int n1 ,rv=1 vd;
       printf("Enter a number :");
       scanf("%d",&n1);
       while (n!=0)
       {
        vd=rv%10;
        switch (vd)
        {
        case 0:
        printf("Zero");
            break;
            case 1:
        printf("one");
            break;
            case 2:
        printf("two");
            break;
            case 3:
        printf("three");
            break;
            case 4:
        printf("four");
            break;

            case 5:
        printf("five");
            break;
            case 6:
        printf("six");
            break;
            case 7:
        printf("seven");
            break;
            case 8:
        printf("eight");
            break;
            case 9:
        printf("nine");
            break;
        }
       }
       
}