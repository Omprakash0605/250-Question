//wap to print area of triangle
#include <stdio.h>

int main() {
    float base, height;

    printf("Enter the base of the triangle: ");
    scanf("%f", &base);
    printf("Enter the height of the triangle: ");
    scanf("%f", &height);


    printf("The area of the triangle is: %.2f\n", 0.5 * base * height); //.2 means no. upto 2 place after decimal

    return 0;
}
