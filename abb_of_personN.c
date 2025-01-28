// wap to convert a person's name into an abbreviated

#include<stdio.h>

int main(){
    char fname[10], mname[10], lname[10];
    
    printf("Enter your first name: ");
    scanf("%s", fname);
    
    printf("Enter your middle name: ");
    scanf("%s", mname);
    
    printf("Enter your last name: ");
    scanf("%s", lname);
    
    // Print the abbreviated name
    printf("Abbreviated name: %c. %c. %s\n", fname[0], mname[0], lname);

    return 0;
}
