#include <iostream>
#include <string>
using namespace std;
double cgpa(int n){
    int c,csum;
    double sum=0;
    string grade;

    for (int i=1;i<=n;i++){
        cout<<"Enter credits and grade:";
        cin>>c>>grade;
        csum+=c;
        if (grade=="A+"){
            sum+=c*10;
        }
        else if (grade=="A"){
            sum+=c*9;
        }
        else if (grade=="B+"){
            sum+=c*8;
        }
        else if (grade=="B"){
            sum+=c*7;
        }
        else if (grade=="C+"){
            sum+=c*6;
        }
        else if (grade=="C"){
            sum+=c*5;
        }
        else if (grade=="D"){
            sum+=c*4;
        }
        else if (grade=="F"){
            sum+=c*0;
        }
    }

    return sum/csum;
}
int main(){
    int n;
    double x;
    cout<<"Enter the number of subjects";
    cin>>n;
    x=cgpa(n);
    cout<<"Your CGPA is"<<x;

}