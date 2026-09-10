#include <stdio.h>

//  Perform Addition, Subtraction, Multiplication and Division of 2 numbers as per user’s choice. 
void main(){
    int n1, n2;
    char choice;
    printf("Enter First Number: ");
    scanf("%d", &n1);
    printf("Enter Second Number: ");
    scanf("%d", &n2);
    printf("Enter your choice (+, -, *, /): ");
    scanf(" %c", &choice);
    if(choice==43){
        printf("%d + %d = %d", n1, n2, n1+n2);
    }
    else if(choice==45){
        printf("%d - %d = %d", n1, n2, n1-n2);
    }
    else if(choice==42){
        printf("%d * %d = %d", n1, n2, n1*n2);
    }
    else if(choice==47){
        printf("%d / %d = %.2f", n1, n2, n1/n2);
    }
    else{
        printf("Invalid Choice");
    }
}