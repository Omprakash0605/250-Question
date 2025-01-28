#include<stdio.h>

int main(){
    int x;
    printf("Enter the year:\n");
    scanf("%d",&x);

    if(x%4 == 0){
        printf("the given year %d is leap year\n",x);
    }else{
        printf("the given year %d is not leap year\n",x);
    }

    return 0;
}