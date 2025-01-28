#include<stdio.h>

int main(){

    float P, R, T;

    printf("Enter the principal amount: ");
    scanf("%f", &P);

    printf("Enter the rate of interest: ");
    scanf("%f", &R);

    printf("Enter the time (in years): ");
    scanf("%f", &T);

    printf("The Simple Interest is: %f\n", (P * R * T) / 100);

    return 0;
}

