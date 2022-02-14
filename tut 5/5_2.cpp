#include<iostream>
using namespace std;

int main(){
    int x,o=0,e=0,p=0,n=0;
    for(int i=0;i<10;i++){
        cin>>x;
        if(x>0){
            p+=1;
            if(x%2==0) e+=1;
            else o+=1;
        }
        else if(x<0){
            n+=1;
            x=-x;
            if(x%2==0) e+=1;
            else o+=1;
        }
    }
    cout<<"Number of +ve numbers:"<<p<<endl;
    cout<<"Number of -ve numbers:"<<n<<endl;
    cout<<"Number of even numbers:"<<e<<endl;
    cout<<"Number of odd numbers:"<<o<<endl;    
    return 0;
}