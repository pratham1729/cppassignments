#include<iostream>
using namespace std;

int main(){
    int m,n;
    cout<<"Enter the number of rows and columns:"<<endl;
    cin>>m>>n;
    int A[m][n],B[m][n],C[m][n],i,j;
    for(i=0;i<m;i++){                              //taking input for A and B and adding them to C
        for(j=0;j<n;j++){
            cout<<"Enter element for array A:";
            cin>>A[i][j];
            cout<<"Enter element for array B:";
            cin>>B[i][j];
            C[i][j]=A[i][j]+B[i][j];
        }
    }
    cout<<"ARRAY A"<<endl;
    for(i=0;i<m;i++){                                  //displaying A
        for(j=0;j<n;j++){
            cout<<A[i][j]<<" ";
    }
        cout<<endl;
    }
    cout<<"ARRAY B"<<endl;                        //displaying B
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout<<B[i][j]<<" ";
    }
    cout<<endl;
    }
    cout<<"Sum Array"<<endl;                   //displaying sum array
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout<<C[i][j]<<" ";
    }
    cout<<endl;
    }
    
    return 0;
}