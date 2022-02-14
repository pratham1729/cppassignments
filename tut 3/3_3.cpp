#include<iostream>
#include<string>
using namespace std;
int main(){
    string str1,str2,result;
    getline(cin,str1);
    getline(cin,str2);
    int len1=str1.length(),len2=str2.length();
    for(int i=0;i<=(len1+len2-1);i++){
        if (i<len1){
            result+=str1[i];
        }
        else{
            result+=str2[i-len1];

        }
    }
    cout<<result;
}