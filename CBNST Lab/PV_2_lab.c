#include<stdio.h>

int main(){

    int n,temp;
    int hrs;

    printf("Enter the value in seconds:");
    scanf("%d", &n);

    temp = n;

    while(temp>=3600){
        temp = temp%60;
        hrs++; 
    }

    printf("%d %d", hrs,temp);


}