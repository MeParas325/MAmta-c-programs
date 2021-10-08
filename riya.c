#include<stdio.h>

int main(){
    float f, c;

    printf("Enter the temperature in f:");
    scanf("%f", &f);

    c = (5*(f-32))/9;
    printf("The temperature is:%0.2f",c);

    return 0;
}