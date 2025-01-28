// write a program to convert celcius to farenheit 

#include<stdio.h>


int c_to_f(float c){
    float formula;
    formula=(c * 9/5) + 32;
    return formula;
}
int f_to_c(float f){
    float formula;
    formula =(f - 32) * 5/9;
    return formula;
}
int k_to_c(float k){
    float formula;
    formula= k - 273.15;
    return formula;
}

int main(){
    k_to_c(50);
    f_to_c(62);
    c_to_f(65);
    return 0;
}