#include <iostream>
using namespace std;
class student{
    private:
    string name;
    long long enrollment_no;
    int credits_comms;
    int credits_cen;
    int credits_psycho;
    int credits_maths;
    int credits_phn;
    int grades_comms;
    int grades_cen;
    int grades_psycho;
    int grades_maths;
    int grades_phn;
    double sgpa;
    public:
    void subjectdetails(int a, int b, int c, int d, int e);
    void inputdetails();
    void displaysgpa();
};
void student::subjectdetails(int a, int b, int c, int d, int e){
    credits_comms=a;
    credits_cen=b;
    credits_psycho=c;
    credits_maths=d;
    credits_phn=e;
};
void student::inputdetails(){
    cout<<"Enter name of student: ";
    cin>>name;
    cout<<"Enter enrollment number: ";
    cin>>enrollment_no;
    cout<<"Enter grades in commmunication skills: ";
    cin>>grades_comms;
    cout<<"Enter grades in cen-105: ";
    cin>>grades_cen;
    cout<<"Enter grades in psychology: ";
    cin>>grades_psycho;
    cout<<"Enter grades in mathematics: ";
    cin>>grades_maths;
    cout<<"Enter grades in electromagnetic theory: ";
    cin>>grades_phn;
    sgpa=(credits_comms*grades_comms+credits_cen*grades_cen+credits_psycho*grades_psycho+credits_maths*grades_maths+credits_phn*grades_phn)/double(credits_cen+credits_comms+credits_maths+credits_phn+credits_psycho);
}
void student::displaysgpa(){
    cout<<"Name: "<<name<<endl;
    cout<<"Enrollment Number: "<<enrollment_no<<endl;
    cout<<"SGPA: "<<sgpa<<endl;
}
int main(){
    student details[30];
    int a,b,c,d,e;
    cout<<"Enter credits of commmunication skills: ";
    cin>>a;
    cout<<"Enter credits of cen-105: ";
    cin>>b;
    cout<<"Enter credits of psychology: ";
    cin>>c;
    cout<<"Enter credits of mathematics: ";
    cin>>d;
    cout<<"Enter credits of electromagnetic theory: ";
    cin>>e;
    for(int i=0; i<30; i++){
        details[i].subjectdetails(a,b,c,d,e);
        cout<<"Enter details for student "<<i+1<<": ";
        details[i].inputdetails();
    }
    for(int i=0; i<30; i++){
        cout<<"Result: ";
        details[i].displaysgpa();
    }
    return 0;
}