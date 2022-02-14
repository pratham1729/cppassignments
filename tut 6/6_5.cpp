#include<iostream>
#include<string>
using namespace std;

string myreverse(string &str){
    for(int i=0;i<str.length()/2;i++){
        char *x=&str[i];
        char *y=&str[str.length()-i-1];
        char z=*x;
            *x=*y;
            *y=z;
    }

}
int main(){
    string str;
    getline(cin,str);
    myreverse(str);
    cout<<str;    
    return 0;
}