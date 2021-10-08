#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int size = 0;
    int i;
    char str[1025];

    scanf("%[^\n]", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        size++;
    }

    for (i = 0; i < size; i++)
    {
        if(str[i] == ' '){
            printf("\n");
            continue;
        }
        printf("%c", str[i]);
    }
    
}