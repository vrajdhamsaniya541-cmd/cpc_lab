#include<stdio.h>
#include<math.h>
void main()
    {
        int i=0,n=9;
        float root;
        while (i<=n)
        {
            root=sqrt(i);
            printf("%.4f",root);
            i=i+1;
        }
    }