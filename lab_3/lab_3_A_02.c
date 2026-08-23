#include <stdio.h>

int main()
{
    int cd, cm, cy;
    int bd, bm, by;
    int age;

    printf("Enter current date (DD MM YYYY): ");
    scanf("%d %d %d", &cd, &cm, &cy);

    printf("Enter birth date (DD MM YYYY): ");
    scanf("%d %d %d", &bd, &bm, &by);

    age = cy - by;

    if (cm < bm || (cm == bm && cd < bd))
    {
        age--;
    }

    printf("Age = %d years", age);

    return 0;
}