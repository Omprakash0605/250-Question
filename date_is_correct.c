#include<stdio.h>

int main(){
    int D,M,Y;
    printf("enter the date:");
    scanf("%d%d%d",D,M,Y);

    if((D>=1 || D<=31) && (M>=1 || M<=12) && (Y>=1) ){
        printf("%d/%d/%d",D,M,Y);
    }else{
        printf("date is wrong");
    }
    return 0;
}