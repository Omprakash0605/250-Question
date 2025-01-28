// write a program to check character is vowel or consonant

#include<stdio.h>

int main(){
    
    char ch;
    printf("Enter a character : "); 
    scanf("%c",&ch);

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
        printf("the given character %c is vowel",ch);
    }else{
        printf("the given character %c is consonant",ch);
    }

    return 0;
}