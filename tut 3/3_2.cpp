#include<iostream>
#include<string>
using namespace std;
int main(){
    string x,y;
    getline(cin,x);
    for(int i=0;i<x.length();i++){
        if(int(x[i])>=65 and int(x[i])<=90){
            y+=char(int(x[i])+32);
        }
        else if(int(x[i])<=122 and int(x[i])>=97){
            y+=char(int(x[i])-32);
        }
        else{
            y+=x[i];
        }
    }
    cout<<y;

}