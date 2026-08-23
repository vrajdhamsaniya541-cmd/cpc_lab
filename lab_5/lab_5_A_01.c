#include <stdio.h>

int main()
{
    float a, b;
    int choice;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
        printf("Addition = %.2f", a + b);
    else if (choice == 2)
        printf("Subtraction = %.2f", a - b);
    else if (choice == 3)
        printf("Multiplication = %.2f", a * b);
    else if (choice == 4)
    {
        if (b != 0)
            printf("Division = %.2f", a / b);
        else
            printf("Division by zero is not possible.");
    }
    else
        printf("Invalid choice.");

    return 0;
}