#include <stdio.h>

//  Perform Addition, Subtraction, Multiplication and Division of 2 numbers as per user’s choice using switch.
void main(){
    float n1, n2;
    char choice;
    printf("Enter First Number: ");
    scanf("%f", &n1);
    printf("Enter Second Number: ");
    scanf("%f", &n2);
    printf("Enter your choice (+, -, *, /): ");
    scanf(" %c", &choice);
    switch (choice)
    {
    case '+':
        printf("%.2f + %.2f = %.2f", n1, n2, (n1+n2));
        break;
    
    case '-':
        printf("%.2f - %.2f = %.2f", n1, n2, (n1-n2));
        break;
    
    case '*':
        printf("%.2f * %.2f = %.2f", n1, n2, (n1*n2));
        break;
    
    case '/':
        printf("%.2f / %.2f = %.2f", n1, n2, (n1/n2));
        break;
    
    default:
        printf("Invalid Input!");
        break;
    }
}