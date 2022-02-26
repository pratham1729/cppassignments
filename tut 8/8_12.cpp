#include<iostream>
#include<cmath>
using namespace std;

class fixDeposit{
    protected:
        double amount; // principal amount
        static int acc;
        int accno; // account number initialization
    public:
        fixDeposit(double p){
            amount = p;
            accno=acc;
            acc++;
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
int fixDeposit::acc=211;// static variables are assigned outside;
class SIdeposit: public fixDeposit{
    protected:
        double YrRateInterest;
        int depositeTimePeriodYr;
    public:
    SIdeposit(double p, double intrestRate,int yr):fixDeposit(p){
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
        cout<<"The account number is: "<<accno<<endl;
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
    CIdeposit(double p, double intrestRate,int yr):fixDeposit(p){
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
        cout<<"The account number is: "<<accno<<endl;
        cout<<"The compound Interest is: "<<interest()<<endl;
        cout<<"The Net amount is: ";
        double intrest=interest();
        amount=amount+intrest;
        cout<<amount<<endl;
    }   
};
int main(){
    SIdeposit rohit{75,.25,5};
    CIdeposit virat{75,.05,10};
    rohit.update(25);
    virat.update(25);
    rohit.display();
    virat.display();
    SIdeposit kuldeep(100'000,.2,5);
    
    return 0;
}
