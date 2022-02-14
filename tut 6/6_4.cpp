#include <iostream>
#include <cmath>
using namespace std;
int main(){
    cout<<fixed;
    cout.precision(3);
    float arr[4][4];
    for (int i=0;i<4;i++){
        for (int j=0;j<4;j++){cin>>arr[i][j];}
    }
    for (int i=0;i<4;i++){
        cout<<"row"<<i<<' '<<arr[i][0]<<' '<<arr[i][1]<<' '<<arr[i][2]<<' '<<arr[i][3]<<endl;
    }
    float factor = -(arr[2][0])/arr[3][0];
    for (int i=0;i<4;i++){
        arr[2][i]+=factor*arr[3][i];

    }
    factor=-arr[1][0]/(arr[3][0]);
    float factor1= -(arr[1][1]+factor*arr[3][1])/arr[2][1];
    for (int i=0;i<4;i++){
        arr[1][i]+=factor*arr[3][i];
        arr[1][i]+=factor1*arr[2][i];
    }
    factor=-arr[0][0]/arr[3][0];
    factor1=-(arr[0][1]+factor*arr[3][1])/arr[2][1];
    float factor2=-((arr[0][2]+factor*arr[3][2]+factor1*arr[2][2])/arr[1][2]);
    for (int i=0;i<4;i++){
        arr[0][i]+=factor*arr[3][i];
        arr[0][i]+=factor1*arr[2][i];
        arr[0][i]+=factor2*arr[1][i];
    }
    for (int i=0;i<4;i++){
        cout<<arr[i][0]<<' '<<arr[i][1]<<' '<<arr[i][2]<<' '<<arr[i][3]<<endl;
    }

    double determinant = 0;
    for(int i=0;i<4;i++){
        determinant*=arr[i][3-i];
    }
   cout<<"Determinant="<<determinant<<endl;
   return 0;
}
