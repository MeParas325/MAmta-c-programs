#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value: ";
    cin>>n;
    for (int i = 0; i <n ; i++){
        for (int j = 1; j< n -i; j++){
            cout<<j;
        }
        for (int k =2; k<=n; k++){
            cout<<k;
        }
        cout<<endl;
    }
    return 0;
}