/* #include<stdio.h>

int main(){

    int n,ld;
    printf("enter a no.\n");
    scanf("%d",&n);

    for (int i = 0; i <=n; i++)
    {
        ld=n%10;
    }

    int power =1;
    for (int i = 0; i <=n; i++)
    {
        power=power*ld;
    }

    int rem =0;
    for (int i = 0; i <=n; i++)
    {
        rem=rem*10+power;
        n=n/10;
    }

    if(n==rem){
        printf("armstrong");
    }else{
        printf("not");
    }
    
    return 0;
}
*/

#include <stdio.h>

int main() {

    int n, original_N, remainder, numDigits = 0;
    int result = 0;

    printf("Enter a number:\n");
    scanf("%d", &n);

    original_N = n;

    // Calculate the number of digits
    int temp = n;
    while (temp != 0) {
        temp /= 10;
        numDigits++;
    }

    // Calculate the sum of each digit raised to the power of numDigits
    temp = n;
    while (temp != 0) {
        remainder = temp % 10;

        // Calculate remainder^numDigits without math.h
        int power = 1;
        for (int i = 0; i < numDigits; i++){
            power *= remainder;
        }

        result += power;
        temp /= 10;
    }

    // Check if the number is an Armstrong number
    if (result == original_N) {
        printf("%d is an Armstrong number.\n", original_N);
    } else {
        printf("%d is not an Armstrong number.\n", original_N);
    }

    return 0;
}
