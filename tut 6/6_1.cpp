#include<iostream>
using namespace std;
int* search(int arr[],int y){
    int i=0;
    int x=sizeof(arr)/sizeof(arr[0]);
    int* ptr=&arr[0];
    bool flag=true;
    while(i<x){
        ptr=ptr+i;
        if(*(ptr)==y){ 
            flag=false;
            break;}
        i++;
    }
    if (flag==false) return ptr;
    else NULL;

}
int main(){
    int n,y;
    cout<<"Enter the number of elements in the array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element to be searched:";
    cin>>y;
    cout<<search(arr,y);
    return 0;
}