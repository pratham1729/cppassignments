#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
class Parent1{
    protected:
        int dec;
    public:
        Parent1(){
            cout<<"Enter the decimal number: ";
            cin>>dec;
            cout<<endl; 
        }
        virtual void display(){
            cout<<"Your Decimal number is: "<<dec<<endl;
        }
};
class Parent2{
    protected:
        string bin;
    public:
        Parent2(){
            bin="";
        }
        void display(){
            cout<<"Your Binary number is: "<<bin<<endl;
        }
};
class child:public Parent1,public Parent2{
    public:
        child():Parent1(),Parent2(){
            int tempDec{dec};
            while (tempDec!=0)
            {
                if(tempDec%2==0)bin+="0";
                else bin+="1";
                tempDec/=2;
            }
            reverse(bin.begin(),bin.end());
        }
        void display(){
            Parent1::display();
            Parent2::display();
        }
};
int main(){
    child obj;
    obj.display();
    return 0;
}