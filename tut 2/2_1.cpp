#include <iostream>
using namespace std;

int main(){
    int r;
    double c,f;
    cout<<"Type 1 for C to F\nType 2 for F to C\n";
    cin>>r;
    switch(r){
    case 1:
        cout<<"Please enter the temperature in celcius:";
        cin>>c;
        f=1.8*c+32.0;
        cout<<"The temperature in Farhenheit is:"<<f;
        break;
    
    case 2:
        cout<<"Please enter temperature in farhenheit:";
        cin>>f;
        c=5*(f-32.0)/9;
        cout<<"Temperature in celcius is:"<<c;
        break;    
    }

}

