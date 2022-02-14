#include <iostream>
using namespace std;
double add(double a,double b){
    return a+b;
}
double subtract(double a,double b){
    return a-b;
}
double multiply(double a,double b){
    return a*b;
}
double divide(double a,double b){
    return a/b;
}
void showchoice(){
    int x;
    double a,b;
    while (true){
        cout<<"1 for Addition\n2 for Subtraction\n3 for Multiplication\n4 for Division\n0 for Exit"<<endl;
        cin>>x;
        if (x==0){
            break;
        }
        cout<<"Enter both the numbers:"<<endl;
        cin>>a>>b;
        if(x==1){
            cout<<add(a,b)<<endl;
        }
        else if(x==2){
            cout<<subtract(a,b)<<endl;
        }
        else if(x==3){
            cout<<multiply(a,b)<<endl;
        }
        else if(x==4){
            cout<<divide(a,b)<<endl;
        }
        }
}

int main(){
    showchoice();
    
}