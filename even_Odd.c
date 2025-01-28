//wap to check the no. is even or odd
#include<stdio.h>

int main(){
    int x;
    printf("Enter a no. \n");
    scanf("%d",&x);

    if(x%2==0){
        printf("it is a even no.\n");
    }else{
        printf("it is a odd no.\n");
    }

    return 0;
}