#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch >= 'A' && ch <= 'Z')
        printf("Uppercase character");
    else if (ch >= 'a' && ch <= 'z')
        printf("Lowercase character");
    else if (ch >= '0' && ch <= '9')
        printf("Digit");
    else
        printf("Special character");

    return 0;
}