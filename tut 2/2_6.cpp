#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a,i;
    bool flag=true;
    cin>>a;
    if (a==1){
        cout<<"Neither prime nor composite";
    }
    else{for(i=2;i<=int(sqrt(a));i++){
        if(a%i==0){
            flag=false;
            break;
            }
    }
        
    if(flag){
        cout<<"Y";
    }
    else{
        cout<<"N";
    }
    }
    



}