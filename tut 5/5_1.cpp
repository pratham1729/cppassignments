#include<iostream>
using namespace std;

int main(){
    int n,i,j,x,y;
    int temp;
    cout<<"Enter size of array:";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){ //input array
        cin>>arr[i];
    }
    cout<<"Original array: ";
    for(i=0;i<n;i++){ //displaying orginal array
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(i=0; i<n/2.0;i++){ //flipping array
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    cout<<"Flipped array: ";
    for(i=0;i<n;i++){ //displaying flipped array
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(i=0;i<n-1;i++){ //selection sort
        x=arr[i];
        y=i;
        for(j=i;j<n;j++){
            if(arr[j]<x){
                x=arr[j];
                y=j;
            }
        }
        temp=arr[i];
        arr[i]=x;
        arr[y]=temp;
    }
    cout<<"Ascending array: ";
    for(i=0;i<n;i++){ //displaying ascending array
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(i=0;i<n-1;i++){ //selection sort
        x=arr[i];
        y=i;
        for(j=i;j<n;j++){
            if(arr[j]>x){
                x=arr[j];
                y=j;
            }
        }
        temp=arr[i];
        arr[i]=x;
        arr[y]=temp;
    }
    cout<<"Descending array: ";
    for(i=0;i<n;i++){ //displaying descending array
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}