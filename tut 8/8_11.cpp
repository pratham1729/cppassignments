#include<iostream>
#include<cmath>
using namespace std;

class fixDeposit{
    protected:
        int accno; // account number
        double amount; // principal amount
    public:
        fixDeposit(int a, double p){
            accno = a;
            amount = p;
        }

        double interest(){
            cout << "The member function in fixDeposit";
            return 0;
        }

        void update(double d){
            amount += d;
        }

        void display(){
            cout<<"The member function in fixDeposit";
        }
};
class SIdeposit: public fixDeposit{
    protected:
        double YrRateInterest;
        int depositeTimePeriodYr;
    public:
    SIdeposit(int a, double p, double intrestRate,int yr):fixDeposit(a,p){
        YrRateInterest=intrestRate;
        depositeTimePeriodYr=yr;
    }
    double interest(){
        // cout << "The simple Intrest is: ";
        double intrest{((amount*YrRateInterest))*depositeTimePeriodYr};
        // cout<<intrest<<endl;
        return intrest;
    }
    void display(){
        cout<<"The simple Interest is: "<<interest()<<endl;
        cout<<"The Net amount is: ";
        double intrest=interest();
        amount=amount+intrest;
        cout<<amount<<endl;
    }   
};
class CIdeposit: public fixDeposit{
    protected:
        double YrRateInterest;
        int depositeTimePeriodYr;
    public:
    CIdeposit(int a, double p, double intrestRate,int yr):fixDeposit(a,p){
        YrRateInterest=intrestRate;
        depositeTimePeriodYr=yr;
    }
    double interest(){
        // cout << "The compound Intrest is: ";
        double intrest{amount*pow((1+YrRateInterest),depositeTimePeriodYr)-amount};
        // cout<<intrest<<endl;
        return intrest;
    }
    void display(){
        cout<<"The compound Interest is: "<<interest()<<endl;
        cout<<"The Net amount is: ";
        double intrest=interest();
        amount=amount+intrest;
        cout<<amount<<endl;
    }   
};
int main(){
    SIdeposit rohit{211,75,.25,5};
    CIdeposit virat{201,75,.05,10};
    rohit.update(25);
    virat.update(25);
    rohit.display();
    virat.display();
    
    return 0;
}
