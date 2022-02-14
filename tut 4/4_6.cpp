#include <iostream>
#include <string>
using namespace std;
string alpha(int x=65){
    if (x==90){
        return string(1,char(x));
    }
    else{
        return string(1,char(x))+"\t"+alpha(x+1);
    }

}
int main(){
    cout<<alpha();
}