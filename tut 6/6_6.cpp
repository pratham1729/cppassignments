#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    int x=str.length();
    for(int i=1;i<x;i++){
        char *k=&str[i];
        char x=*k;
        int t=int(*k);
        int j=i-1;
        while(j>=0 && int(str[j])>t){
            str[j+1]=str[j];
            j-=1;}   
        str[j+1]=x;
    }
    cout<<str;
    return 0;
}
