#include <stdio.h>
#include <math.h>

//  Determine the roots of the equation ax²+bx+c=0.
void main(){
    float a, b, c, D, root;
    printf("Enter equation (ax2+bx+c=0): ");
    scanf("%f %f %f", &a, &b, &c);
    D=(b*b)-(4*a*c);
    D=sqrt(D);
    if(D==0){
        root=(-b)/(2*a);
        printf("root=%.2f", root);
    }
    else if(D>=0){
        root=(-b)+((D)/2*a);
        printf("root1=%.2f", root);
        root=(-b)-((D)/2*a);
        printf("root2=%.2f", root);
    }
    else{
        root=(-b)/(2*a);
        printf("root1=%.2f", root);
        root=(b)/(2*a);
        printf("root2=%.2f", root);
    }
}