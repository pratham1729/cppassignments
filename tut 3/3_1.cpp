#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    int n;
    cin>>n;
    a=1;
    b=0;
    c=0;
    for (int i=1;i<=n;i++){
        cout<<c<<endl;
        c=a+b;
        a=b;
        b=c;
    }
}