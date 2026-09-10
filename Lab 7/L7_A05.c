#include <stdio.h>

//  Check whether number is even number or odd number using conditional operator. 
void main(){
    int num;
    char odd_even;
    printf("Enter number: ");
    scanf("%d", &num);
    odd_even=(num%2==0)?(printf("Even")):(printf("Odd"));
}