#include<stdio.h>

int main(){
	int i, n;

    //Input number of elements into the array
	scanf("%d", &n);
	int arr[n];
    
	//Reading the elements of array
	for(i = 0; i<n; i++){
		scanf("%d", &arr[i]);
	}
     
	//Priniting the elements of array
	for(i = n-1; i<=0; i++){
		printf("%d\n", arr[i]);
	}
}
