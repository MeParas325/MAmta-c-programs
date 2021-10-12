#include<stdio.h>

int main(){
    int s, sec, min, hr;
    printf("Enter value in seconds: ");
    scanf("%d", &s);

    sec = s%60;
    min = s/60;
    if(min >= 60){
        min = min % 60;
    }
    hr = s/3600;

    printf("%d hr: %d min: %d sec", hr, min, sec);
    return 0;
}