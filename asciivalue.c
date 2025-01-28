// WAP to print the ascii value of character

#include<stdio.h>

int main(){ 
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);

    printf("Ascii value for the character %c is : %d\n",ch,ch);
    return 0;
}