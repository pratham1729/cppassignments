#include<iostream>
using namespace std;

int main(){
    int arr[3][3],i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin>>arr[i][j];
    }
    }
    for(i=0;i<3;i++){         //without pointer
        for(j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
    }
    cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<3;i++){           
        for(int j=0;j<3;j++){
            cout<<*(*(arr+i)+j)<<" ";       //double pointer= the inner pointer (arr+i) will point towards ith row and *(arr+i) will give address                                                    //
        }    
        cout<<endl;                         // of ith row 0th element,+j will give the address of ith,jth element and it is dereferenced
    } 
    cout<<endl;
    int* mp=&arr[0][0];
    for(i=0;i<9;i++){         //with pointer  
        cout<<*mp<<" ";
        mp++;
        if(i%3==2) cout<<endl;
    }
    return 0;
}
