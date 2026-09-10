#include <stdio.h>

//  Find out largest number from given 3 numbers using conditional operator.
void main(){
    int n1, n2, n3, max;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    max=(n1>n2)?((n1>n3)?n1:n3):((n2>n3)?n2:n3);
    printf("Largest number is %d", max);
}