#include <iostream>
using namespace std;
float add(float a,float b){
    return a+b;
}
int add(int a,int b){
    return a+b;
}
int main(){
    int x;
    cout<<"1 for integer\n2 for float"<<endl;
    cin>>x;
    switch (x){
        case 1:
            int a,b;
            cout<<"Enter both the numbers"<<endl;
            cin>>a>>b;
            cout<<add(a,b);
            break;
        
        case 2:
            float c,d;
            cout<<"Enter both the numbers"<<endl;
            cin>>c>>d;
            cout<<add(c,d);
            break;
    }

}