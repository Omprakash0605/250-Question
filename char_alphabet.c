// write a program to check character is alphabet or not 

#include<stdio.h>

int main(){
    char ch;
    printf("Enter a character : "); 
    scanf("%c",&ch);

    if(ch >= 65 && ch <=122){
        printf("the given character is alphabet");
    }else{
        printf("the given character is not a alphabet");
    }

    return 0;
}