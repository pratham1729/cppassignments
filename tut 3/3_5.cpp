#include<iostream>
#include<string>
using namespace std;
int main(){
    string str1,str2;
    bool flag;
    flag=true;
    getline(cin,str1);
    getline(cin,str2);
    if(str1.length()==str2.length()){
        for (int i=0;i<str1.length();i++){
            if(str1[i]!=str2[i]){
                flag=false;
                break;
            }
        }
    }
    else{flag=false;}
    if(flag==true){
        cout<<"Equal";
    }
    else{
        cout<<"not equal";
    }
}