#include <iostream>
#include <string>
using namespace std;
void multiple(int x,int y=1){
    if (y==10){
        cout<<x*y<<endl;
    }
    else{
        cout<<x*y<<endl;
        multiple(x,y+1);
    }

}
void multiple(double x,int y=1){
    if (y==10){
        cout<<x*y<<endl;
    }
    else{
        cout<<x*y<<endl;
        multiple(x,y+1);
    }
}
int main(){
    int n,s;
    double m;
    cout<<"1 for integer\n2 for decimal\n";
    cin>>s;
    switch(s){
        case 1:
            cin>>n;
            multiple(n);
            break;
        case 2:    
            cin>>m;
            multiple(m);
            break;
    }

}