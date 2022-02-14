#include<iostream>
using namespace std;

int main(){
    int sales[4][5];
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
        cout<<"Enter Product "<<j+1<<" For Salesperson "<<i+1<<":";
        cin>>sales[i][j];
    }
    }
    cout<<"Displaying"<<endl;
    for(int i=0;i<5;i++){
        for(int j=0;j<6;j++){
            if(i==0 && j==0) cout<<"             ";
            else if(j==0 && i!=0) cout<<"Salesperson"<<i<<":";
            else if (i==0 && j!=0) cout<<"Product"<<j<<"";
            else cout<<sales[i-1][j-1]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}