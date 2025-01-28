#include<stdio.h>

int main(){

    int n,ld=0,rev=0;
    printf("Enter a no.\n");
    scanf("%d",&n);


    while(n!=0){
        ld=n%10;
        rev=rev*10+ld;
        n=n/10;
    }

    printf("%d",rev);
    return 0;
    
}