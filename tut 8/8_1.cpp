#include <iostream>
using namespace std;

long add(int p, int q){
    return p + q;
}

long subtract(int p, int q){
    return abs(p - q);
}

long multiply(int p, int q){
    return p * q;
}

long function(long (*fn_ptr)(int, int), int p, int q){
    return (*fn_ptr)(p, q);
}

long (*ptr[3])(int , int )={add, subtract, multiply};

int main(){
    int p, q;
    cout << "\nEnter the first number: ";
    cin >> p;
    cout << "Enter the second number: ";
    cin >> q;

    cout << "\nUsing function pointer:";
    cout << "\nSum: " << function(add, p, q);
    cout << "\nDifference: " << function(subtract, p, q);
    cout << "\nProduct: " << function(multiply, p, q);


    cout << "\n\nFunction array:";
    cout << "\nSum: " << ptr[0](p, q);
    cout << "\nDifference: " << ptr[1](p, q);
    cout << "\nProduct: " << ptr[2](p, q);

    return 0;
}