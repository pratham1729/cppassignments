#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a,b,c;
    float D,x1,x2;
    cout<<"Enter a,b,c:";
    cin>>a>>b>>c;
    D=b*b-4*a*c;
    if(D>0){
        x1=(-b+sqrt(D))/(2*a);
        x2=(-b-sqrt(D))/(2*a);
        cout<<x1<<','<<x2;
    }
    else if (D==0){
        x1=x2=-b/(2*a);
        cout<<x1<<','<<x2;
    }
    else{
        cout<<"imaginary roots";
    }

}

int main(){
    int a,b,c;
    int d;
    float y,x1,x2;
    cout<<"Enter a,b,c:";
    cin>>a>>b>>c;
    y=b*b-4*a*c;
    d=signbit(y);

    switch(d){
    case (0):
        x1=(-b+sqrt(y))/(2*a);
        x2=(-b+sqrt(y))/(2*a);
        cout<<x1<<','<<x2;
        break;
    
    case(1):
        cout<<"imaginary roots";
        break;
    }

}