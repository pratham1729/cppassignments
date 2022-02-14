#include <iostream>
#include <cmath>
using namespace std;
bool ifprime(int x){
    bool flag=true;
    if (x==1)
        flag=false;
    else
        for(int i=2; i<=sqrt(x);i++){
            if (x%i==0)
                flag=false;
                break;
        }
    return flag;

}
int main(){
    int n1,n2;
    cout<<"Enter smaller number";
    cin>>n1;
    cout<<"Enter larger number";
    cin>>n2;
    for (int i=n1; i<=n2; i++)
        if (ifprime(i)){
            cout<<i<<endl;
        }
}