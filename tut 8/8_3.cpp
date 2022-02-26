#include<iostream>
#include<cmath>
using namespace std;

class Area{
    float area;
    public:
    Area(float r){
        area=22*r*r/7;
    }
    Area(float a,float b,float c){
        float s=(a+b+c)/2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
    }
    Area(float a, float b){
        area=a*b;
    }
    float displayarea() {return area;}
};

int main(){
    int x;
    float a,b,c,r;
    cout<<"Enter choice 1-circle/2-triangle/3-rectangle: ";
    cin>>x;
    if(x==1){
        cout<<"Enter radius: ";
        cin>>r;
        Area obj(r);
        cout<<"AREA="<< obj.displayarea();
    }
    else if(x==2){
        cout<<"Enter the sides:";
        cin>>a>>b>>c;
        Area obj(a,b,c);
        cout<<"AREA="<< obj.displayarea();
    }
    else if (x==3){
        cout<<"Enter length and width:";
        cin>>a>>b;
        Area obj(a,b);
        cout<<"AREA="<< obj.displayarea();
    }

    return 0;
}