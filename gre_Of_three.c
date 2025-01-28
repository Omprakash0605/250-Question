// write a program to find greatest between three no.s
#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter first no.: \n");
    scanf("%d",&a);
    printf("Enter second no.: \n");
    scanf("%d",&b);
    printf("Enter third no.: \n");
    scanf("%d",&c);

    if(a>b && a>c){
        printf("a is %d greatest\n",a);
    }else if (b>a && b>c)
    {
        printf("b is %d greatest\n",b);
    }else
    {
        printf("c is %d greatest\n",c);
    }

    return 0;
}