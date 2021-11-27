#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"Enter the number of rows: ";
    cin>> rows;

    for (int i = 1; i <= 3; i++){
        for (int j = 1; j <= rows ; j++){
            if ((i + j) % 4 == 0 || (j%4 == 0 && i==2)){
                cout<<"* ";
            }else {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}