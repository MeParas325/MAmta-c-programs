#include <stdio.h>    
     
int main()    
{    
    int i;
    //Initialize array     
    int arr[] = {1, 2, 3, 4, 5};     
        
    //Calculate length of array arr    
    int length = sizeof(arr)/sizeof(arr[0]);    
        
    printf("Original array: \n");    
    for (i = 0; i < length; i++) {     
        printf("%d ", arr[i]);     
    }      
        
    printf("\n");    
        
    printf("Array in reverse order: \n");    
    //Loop through the array in reverse order    
    for (i = length-1; i >= 0; i--) {     
        printf("%d ", arr[i]);     
    }     
    return 0;    
}   
