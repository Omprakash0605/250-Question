// write a program to check character is uppercase, lowercase, special character or digit

#include<stdio.h>

int main(){
    char ch;
    printf("Enter a character : "); 
    scanf("%c",&ch);


    if(ch >= 65 && ch <=90){
        printf("the given character %c is UPPERCASE",ch);
    }else if (ch >= 97 && ch <=122){
        printf("the given character %c is lowercase",ch);
    }else if (ch >= 48 && ch <=58){
        printf("the given character %c is digit",ch);
    }else{
        printf("the given character %c is special character",ch);
    }

    return 0;
}