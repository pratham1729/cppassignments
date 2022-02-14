#include<iostream>
using namespace std;

int main(){
    int n;
    float a,x;
    cout<<"Enter x,a,n:";
    cin>>x>>a>>n;
    float arr[n][2];
    for(int i=0;i<n;i++){    
        arr[i][0]=x;
        x=x*a;
        arr[i][1]=x;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}