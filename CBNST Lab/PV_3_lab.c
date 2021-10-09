#include<stdio.h>

int main(){

    float f, c;

    printf("Enter the temperature in fahrenhite:");
    scanf("%f", &f);

    c = (5*(f-32))/9;

    printf("Temperature in celcius is:%0.2f", c);
}