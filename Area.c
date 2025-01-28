// wap to print the area and circumference of circle

#include<stdio.h>

int main(){
    int r;
    printf("Enter the radius of circle");
    scanf("%d",&r);
    
    printf("area of circle:%f\n",3.14*(r*r));
    printf("Circumference of circle:%f\n",2*3.14*r);


    return 0;
}