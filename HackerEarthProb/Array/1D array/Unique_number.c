#include<stdio.h>

int main(){
    int count = 0;
    int i, j;
    // int n;
    // scanf("%d", &n);
    int arr[4];
    for(i =0; i<4; i++){
        scanf("%d", &arr[i]);
     }
    
    for(i = 0; i<4; i++){
        int var = arr[i];
        for(j = 0; j<4; j++){
            if(arr[j] == var){
                count = count + 1;
            }
            if(arr[j] == var && count == 1){
                printf("%d", arr[j]);
            }
            
        }
    }
    
    
    
    
}
