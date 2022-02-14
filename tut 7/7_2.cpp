#include<iostream>
#include<string>
using namespace std;
typedef struct date{
    int date;
    int month;
    int year;

};

typedef struct students{
        string name;
        int enrolno;
        date jdate;
    };
typedef struct faculty{
        string name;
        int enrolno;
        date jdate;
    };
int main(){
    int n;
    cout<<"Enter the number of students: ";
    cin>>n;
    students list[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the details(name,enrollment) number of Student "<<i+1<<endl;
        cin>>list[i].name;
        cin>>list[i].enrolno;
        cout<<"Enter join date:"<<endl;
        cin>>list[i].jdate.date>>list[i].jdate.month>>list[i].jdate.year;
    }
    for(int i=1;i<n;i++){
        students x=list[i];
        int t=x.jdate.year;
        int j=i-1;
        while(j>=0 && list[j].jdate.year>t){
            list[j+1]=list[j];
            j-=1;}   
        list[j+1]=x;
    }
    faculty slist[n];
    for(int i=0;i<n;i++){
        slist[i].name=list[i].name;
        slist[i].enrolno=list[i].enrolno;
        slist[i].jdate.date=list[i].jdate.date;
        slist[i].jdate.month=list[i].jdate.month;
        slist[i].jdate.year=list[i].jdate.year;

        cout<<slist[i].name<<" "<<slist[i].enrolno<<" "<<slist[i].jdate.date<<"\\"<<slist[i].jdate.month<<"\\"<<slist[i].jdate.year<<endl;
    }

    return 0;
}
