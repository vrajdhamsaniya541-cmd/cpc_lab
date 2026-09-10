#include <stdio.h>

//  Input an integer number and check the last digit of number is even or odd.
void main(){
    int num, lastDigit;
    printf("Enter an integer number: ");
    scanf("%d", &num);
    lastDigit=num%10;
    if(lastDigit%2==0){
        printf("The last digit %d is even.", lastDigit);
    }
    else{
        printf("The last digit %d is odd.", lastDigit);
    }
}