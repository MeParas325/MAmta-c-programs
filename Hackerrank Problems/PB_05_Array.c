#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int size = 0, count = 0, temp;
    int i, j;
    char str[1025];

    scanf("%[^\n]", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        size++;
    }

    for (j = 0; j < 10; j++)
    {
        temp = str[j];
        for (i = 0; i < size; i++)
        {
            if(temp == str[i]){
                count++;
            }
        }
       
        printf("%c ", count);
    
    }
    
}