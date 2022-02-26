#include <iostream>
#include <cmath>
using namespace std;

int sqsum(int a){
    int s=0;
    while(a){
        if (a%2==0)
            {s += pow(a, 2);}
        a--;
    }
    return s;
}

int cubesum(int a){
    int s=0;
    while (a){
        if (a%2==0)   
            {s += pow(a, 3);}
        a--;
    }
    return s;
}

int sum(int (*fn)(int), int a){
    return (*fn)(a);
}

int main(){
    int a;
    cout << "Enter the integer: ";
    cin >> a;
    cout << "\nSum of squares of even ints: "
         << sum(sqsum, a);
    cout << "\nSum of cubes of even ints: "
         << sum(cubesum, a);
    return 0;
}