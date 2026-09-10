#include <stdio.h>

//  Read marks of five subjects. Calculate percentage and print class accordingly. Fail below 35, Pass Class between 36 to 45, Second Class between 46 to 60, First Class between 61 to 70, Distinction if more than 70. 
void main(){
    int m1, m2, m3, m4, m5, total=0;
    float percentage;
    printf("Enter marks of five subjects: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
    total = m1 + m2 + m3 + m4 + m5;
    percentage = (total/500)*100;
    if(percentage<35){
        printf("Fail");
    }
    else if(percentage>=36 && percentage<=45){
        printf("Pass Class");
    }
    else if(percentage>=46 && percentage<=60){
        printf("Second Class");
    }
    else if(percentage>=61 && percentage<=70){
        printf("First Class");
    }
    else{
        printf("Distinction");
    }
}