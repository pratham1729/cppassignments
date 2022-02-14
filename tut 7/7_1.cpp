#include<iostream>
using namespace std;

int main(){
    int *marksArray=new int[4]; // dynamic array of size 4
    int t=0;
    while(t<4){
        cin>>marksArray[t];     // marks array
        t++;
    }
    for(int i=0;i<4;i++) cout<<marksArray[i]<<" ";  //display array
    int *marksArrayA=new int[8]; //new array
    for(int i=0;i<4;i++) marksArrayA[i]=marksArray[i]; //populating index 0 to 3
    delete [] marksArray; // deleting array
    for(int i=4;i<8;i++){                                   // populating second array 4 to 7 
        cin>>marksArrayA[i];
    }
    for(int i=0;i<8;i++) cout<<marksArrayA[i]<<" "; //displaying second array 
    delete [] marksArrayA;                //deleting second array
    return 0;
}