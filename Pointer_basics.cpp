#include<iostream>
using namespace std;

int main(){
    int a=3;
    int* b=&a;
    int** c=&b;

    // & --> (Address of) operator
    cout<<"Address of a is "<<b;
    cout<<"\nAddress of a is "<<&a;  //&a and b both will give address of a
    cout<<endl;

    // * --> Dereference operator
    cout<<"The value at address b is "<<*b<<endl;
    cout<<endl;

    // pointer to pointer
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The value at address c is "<<*c<<endl;
    cout<<"The value at address of b is "<<**c<<endl;
    
    return 0;
}