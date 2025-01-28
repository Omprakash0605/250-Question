// write a program to calculate percentage of 5 subject marks
#include<stdio.h>

int main(){
    int Eng,Math,Sci,Hin,SST;
    printf("Enter your marks for calculate percentage:\n");

    printf("Enter marks of English: ");
    scanf("%d",&Eng);
    printf("Enter marks of Maths: ");
    scanf("%d",&Math);
    printf("Enter marks of Science: ");
    scanf("%d",&Sci);
    printf("Enter marks of Hindi: ");
    scanf("%d",&Hin);
    printf("Enter marks of Social Studies: ");
    scanf("%d",&SST);

    float percentage = ((Eng+Math+Sci+Hin+SST)/500.0)*100;

    printf("Percentage of 5 subjects is: %f",percentage);

    return 0;
}