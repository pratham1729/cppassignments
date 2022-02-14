#include<iostream>
#include<string>
using namespace std;
int main(){
    string x;
    int y;
    bool flag;
    getline(cin,x);
    y=x.length();
    flag=true;
    for (int i=0;i<y/2;i++){
        if(x[i]!=x[y-i-1]){
            flag=false;
            break;
        }
    }
    if(flag==true){
        cout<<"Palindrome";
    }
    else{
        cout<<"not a palindrome";
    }

}