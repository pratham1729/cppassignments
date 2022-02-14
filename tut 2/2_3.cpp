#include <iostream>
using namespace std;
int main(){
    int a,factorial=1,i=1;
    cout<<"Enter the number:";
    cin>>a;
    if (a==0){
        factorial=1;
    }
    else{
        for (i=1;i<=a;i++){
            factorial=factorial*i;
        }
    }
    cout<<"The required factorial is "<<factorial;
}

