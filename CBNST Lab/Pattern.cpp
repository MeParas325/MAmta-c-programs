#include<iostream>
using namespace std;

int main(){

    int n;

    cout<<"Enter the number:";

    cin>>n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <=n-i; j++)
        {
            if(i>0){
                cout<<n-1;
            }
            cout<<n<<" ";
        }
        cout<<endl;
    }
    
}