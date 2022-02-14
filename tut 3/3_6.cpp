#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream myfile;
    myfile.open("notes.txt");
    for(int i=1;i<=100;i++){
        myfile<<i<<"\t";
    }
    myfile.close();

}