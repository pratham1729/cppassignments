#include<iostream>
#include<cstring>
using namespace std;


int main(){
    int r1,c1,r2,c2;
    cout<<"Enter rows and columns for matrix A:"<<endl;
    cin>>r1>>c1;
    cout<<"Enter rows and columns for matrix B:"<<endl;
    cin>>r2>>c2;
    int C[r1][c2];
    memset(C,0,sizeof(C));
    if(r2==c1){
        int A[r1][c1],B[r2][c2];
        cout<<"INPUT FOR MATRIX A"<<endl;
        for(int i=0;i<r1;i++){
            for(int j=0;j<c1;j++){
                cin>>A[i][j];
            }
        }
        cout<<"INPUT FOR MATRIX B"<<endl;
        for(int i=0;i<r2;i++){
            for(int j=0;j<c2;j++){
                cin>>B[i][j];
        }
        } 
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                for(int k=0;k<c1;k++){
                    C[i][j]+=A[i][k]*B[k][j];
                }
            }
        }
        for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
        }
        }
    else cout<<"Not compatible";


    return 0;
}