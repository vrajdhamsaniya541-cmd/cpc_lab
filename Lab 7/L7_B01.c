#include <stdio.h>

//   Read 3 numbers, multiply largest number from first two numbers to third one using conditional.  
void main(){
    int n1, n2, n3, max, mul;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    max=(n1>n2)?n1:n2;
    mul=max*n3;
    printf("Output = %d", mul);
}