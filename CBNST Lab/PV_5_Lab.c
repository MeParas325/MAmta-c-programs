#include<stdio.h>

int main(){

    float u, a, t, d;

    printf("Enter the value of initial velocity u:");
    scanf("%f", &u);

    printf("Enter the value of aceleration a:");
    scanf("%f", &a);

    printf("Enter the value of time t:");
    scanf("%f", &t);

    d = (u*t)+ 1*(a*t*t)/2;

    printf("Velocity is %0.2f", d);

}