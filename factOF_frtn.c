#include<stdio.h>

int main(){

    int n, fact=1;
    printf("Enter no. of terms for factorial:\n");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        fact=fact*i;
        printf("Factorial of %d is : %d\n",i,fact);
    }
    
    return 0;
} 