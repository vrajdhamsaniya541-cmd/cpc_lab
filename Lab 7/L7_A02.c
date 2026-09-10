#include <stdio.h>

//  Print number of days in a month using switch.
void main(){
    int month;
    printf("Enter month(1-12): ");
    scanf("%d", &month);
    switch (month)
    {
    case 1:
        printf("No. of day: 31");
        break;
    
    case 2:
        printf("No. of day: 28");
        break;
    
    case 3:
        printf("No. of day: 31");
        break;
    
    case 4:
        printf("No. of day: 30");
        break;
    
    case 5:
        printf("No. of day: 31");
        break;
    
    case 6:
        printf("No. of day: 30");
        break;
    
    case 7:
        printf("No. of day: 31");
        break;
    
    case 8:
        printf("No. of day: 31");
        break;
    
    case 9:
        printf("No. of day: 30");
        break;
    
    case 10:
        printf("No. of day: 31");
        break;
    
    case 11:
        printf("No. of day: 30");
        break;
    
    case 12:
        printf("No. of day: 31");
        break;
    
    default:
        printf("Invalid Input");
        break;
    }
}