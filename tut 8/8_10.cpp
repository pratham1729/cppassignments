#include<iostream>
using namespace std;
class Parent1{
    protected:
        int num;
    public:
        Parent1(){
            cout<<"Enter the number of odd numbers: ";
            cin>>num;
            cout<<endl;
        }
        void display(){
            cout<<"The number of Odd numbers is: "<<num<<endl;
        }
};
class Parent2{
    protected:
        int sum;
    public:
        Parent2(int n){
            sum=n*n;
        }
        void display(){
            cout<<"The sum is: "<<sum<<endl;
        }
};
class child:Parent1,Parent2{
    protected:
    public:
        child():Parent1(),Parent2(num){}
        void display(){
            cout<<"The odd numbers are: ";
            int i{0};
            int oddCount{0};
            while (oddCount<num)
            {
                if(i%2==1){
                    cout<<i<<" ";
                    oddCount++;
                }
                i++;
            }cout<<endl;
            cout<<"The sum of these numbers is: "<<sum<<endl;
        }
};
int main(){
    child obj;
    obj.display();
    return 0;
}