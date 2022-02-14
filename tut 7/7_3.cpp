#include<iostream>
#include<string>
using namespace std;

int main(){
    struct assignment{
        int x;
        int y;
        int sum;
    } obj;
    assignment *ptr=&obj;
    cin>>(*ptr).x>>(*ptr).y;
    (*ptr).sum=(*ptr).x+(*ptr).y;
    cout<<(*ptr).sum;
    return 0;
}