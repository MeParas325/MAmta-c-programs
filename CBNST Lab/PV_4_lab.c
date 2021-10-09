#include<stdio.h>

int main(){

    float u, a, t, v;

    printf("Enter the value of initial velocity u:");
    scanf("%f", &u);

    printf("Enter the value of aceleration a:");
    scanf("%f", &a);

    printf("Enter the value of time t:");
    scanf("%f", &t);

    v = u+ a*t;

    printf("Velocity is %f", v);

}