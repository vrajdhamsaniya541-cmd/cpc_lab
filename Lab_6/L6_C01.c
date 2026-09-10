#include <stdio.h>

//  Find the second largest number among three user input numbers.
void main(){
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    if(num1>num2 && num1>num3){
        if(num2>num3){
            printf("The second largest number is: %d", num2);
        }
        else{
            printf("The second largest number is: %d", num3);
        }
    }
    else if(num2>num1 && num2>num3){
        if(num1>num3){
            printf("The second largest number is: %d", num1);
        }
        else{
            printf("The second largest number is: %d", num3);
        }
    }
    else{
        if(num1>num2){
            printf("The second largest number is: %d", num1);
        }
        else{
            printf("The second largest number is: %d", num2);
        }
    }
}