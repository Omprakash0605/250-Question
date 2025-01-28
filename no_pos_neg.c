#include<stdio.h>

int main(){
    int x;
    printf("Enter a no.:");
    scanf("%d",&x);
    
    if(x>0)
    printf("The no. is positive");
    else
    printf("The no. is negative");

    return 0;
}