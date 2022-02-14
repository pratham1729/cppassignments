#include <iostream>
using namespace std;
class IITR{
    private:
    string name;
    long long enrollment_no;
    double cgpa;
    bool check(double cg){
        if(cg>15.0/2) return true;
        else return false;
    }
    public:
    void inputdetails();
    void display();
};
void IITR::inputdetails(){
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Enter your enrollment number: ";
    cin>>enrollment_no;
    cout<<"Enter your CGPA: ";
    cin>>cgpa;
    if(check(cgpa)) cout<<name<<" ( "<<enrollment_no<<" ) "<<"you are eligible to sit in all placements."<<endl;
    else cout<<name<<" you are eligible to sit in selected placements."<<endl;
}
void IITR::display(){
    long long int passkey;
    cout<<"Enter the password(enrollment number by default):";
    cin>>passkey;
    if(passkey==enrollment_no) cout<<name<<" "<<enrollment_no<<" "<<cgpa;
    else cout<<"You are not authorised";
}
int main(){
    IITR data;
    data.inputdetails();
    int x;
    cout<<"Do you want to see data (0 for NO/1 for YES)?";
    cin>>x;
    if(x==1) data.display();
    return 0;
}