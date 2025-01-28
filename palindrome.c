#include<stdio.h>

// wap to check the given no. is palindrome or not

int main(){

    int n,rev=0,ld=0;
    printf("Enter a no.to check the no. is palindrome or not\n");
    scanf("%d",&n);

    int original_n=n;

    while(n!=0){
        ld=n%10;
        rev=rev*10+ld;
        n=n/10;
    }

    if(original_n==rev){
        printf("It is a palindrome\n");
    }else{
        printf("It is not a palindrome\n");
    }

    return 0;
}