#include<stdio.h>

int main(){
    
/*
    int n, frt_term=1, scd_term=1,nxt_term=0;
    printf("Enter no. of terms for fibonacci:\n");
    scanf("%d",&n);

    if(n<0){
        printf("Enter the positive integer\n");
    }
    else if (n==1)
    {
        printf("Fibonacci of 1 is : %d\n",frt_term);
    }
    else if (n==2)
    {
        printf("Fibonacci of 1 is : %d\n",frt_term);
        printf("Fibonacci of 2 is : %d\n",scd_term);
    }
    else {

        printf("Fibonacci of 1 is : %d\n",frt_term);
        printf("Fibonacci of 2 is : %d\n",scd_term);

        for(int i=3; i<=n; i++){
            nxt_term=frt_term+scd_term;
            printf("fibonacci of %d is : %d\n",i,nxt_term);

            frt_term=scd_term;
            scd_term=nxt_term;
            }
    }
*/

printf("hello\n");


    int n,a=1,b=1,sum=0;
    printf("Enter no.\n");
    scanf("%d",&n);

    for(int i=1; i<=n-2; i++){
        sum=a+b;
        a=b;
        b=sum;
    }

    printf("fibonacci of %d is : %d\n",n,sum);


    return 0;
}