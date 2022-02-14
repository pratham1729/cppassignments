#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int first_value=10;
    int second_value=15;
    cout<<"First value:"<<first_value<<endl<<"Second Value:"<<second_value<<endl;
    int* mypointer;
    mypointer=&first_value;
    *mypointer=15;
    cout<<"first value:"<<first_value<<endl;
    mypointer=&second_value;
    *mypointer=10;
    cout<<"second value:"<<second_value<<endl;    
    return 0;
}