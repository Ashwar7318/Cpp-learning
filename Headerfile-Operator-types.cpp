//There are two types of header file
// 1. System Header file:- It comes with the compiler.
#include<iostream>
// 2. User defined header file:- It is written by the programmer
// #include"this.h" It will produce error if this.h is not presen in current directory

using namespace std;
int main(){
    int a,b;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"\nEnter the value of b: ";
    cin>>b;
    cout<<"\nOperator in C++"<<endl;  // endl & \n both are the line changing operator
    cout<<"Following are the types of operator in C++: "<<endl;

    // Airthematic operator
    cout<<"The value of a+b is; "<<a+b<<endl;
    cout<<"The value of a-b is; "<<a-b<<endl;
    cout<<"The value of a*b is; "<<a*b<<endl;
    cout<<"The value of a/b is; "<<a/b<<endl; //It always give the value before point like 0.9 then it will give 0
    cout<<"The value of a%b is; "<<a%b<<endl;
    cout<<"The value of a++ is; "<<a++<<endl; //first print then increment
    cout<<"The value of a-- is; "<<a--<<endl; //First print then decrement
    cout<<"The value of ++a is; "<<++a<<endl; //First increment then print
    cout<<"The value of --a is; "<<--a<<endl; //First decrement then pring
    cout<<endl;

    //Assignent Operator--> Used to assign value to variables
    // int a=3, b=4
    // char d='u'

    // Comparision operator
    cout<<"Following are the comparision operator in C++"<<endl;
    cout<<"The value of a==b is "<<(a==b)<<endl; // if the comparision is right then it gives output 1 otherwise 0
    cout<<"The value of a!=b is "<<(a!=b)<<endl; // if the  comparision is right then it gives output 1 otherwise 0 
    cout<<"The value of a>=b is "<<(a>=b)<<endl; // if the comparision is right then it gives output 1 otherwise 0
    cout<<"The value of a<=b is "<<(a<=b)<<endl; // if the comparision is right then it gives output 1 otherwise 0
    cout<<"The value of a>b is "<<(a>b)<<endl; // if the comparision is right then it gives output 1 otherwise 0
    cout<<"The value of a<b is "<<(a<b)<<endl; // if the comparision is right then it gives output 1 otherwise 0
    cout<<endl;

    //Logical operator
    cout<<"Following are the logical operator in C++"<<endl;
    cout<<"The value of this logical and operator ((a==b) $& (a<b))is "<<((a==b) && (a<b))<<endl; //Logical and operator is true when both the logic is true
    cout<<"The value of this logical or operator ((a==b) || (a<b))is "<<((a==b) || (a<b))<<endl; // If any one pf the logic is true then it gives true 
    cout<<"The value of this logical not operator (!(a==b))is "<<(!(a==b))<<endl; //iIf the out is true then it gives false or vice-versa
    return 0;

}