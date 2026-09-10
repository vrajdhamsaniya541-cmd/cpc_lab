#include <stdio.h>

//  Check whether the entered character is upper case, lower case, digit or any special character. 
void main(){
    char ch;
    printf("Enter character: ");
    scanf("%c", &ch);
    if(ch>='A' && ch<='Z'){
        printf("Character is an upper case letter.");
    }
    else if(ch>='a' && ch<='z'){
        printf("Character is a lower case letter.");
    }
    else if(ch>='0' && ch<='9'){
        printf("Character is a digit.");
    }
    else{
        printf("Character is a special character.");
    }
}