#include <stdio.h>

int main()
{
    float feet, inches;

    printf("Enter feet: ");
    scanf("%f", &feet);

    inches = feet * 12;

    printf("Inches = %.2f", inches);

    return 0;
}