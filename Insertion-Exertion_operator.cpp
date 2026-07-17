#include<iostream>

using namespace std;

int main()
{
    int num1, num2;
    cout<<"Enter the value of num1: "; // '<<' is insertion operator
    cin>> num1; // '>>' is extraction operator
    cout<<"\nEnter the value of num2: ";
    cin>> num2;
    cout<<"\nThe sum of num1 and num2 is: "<<num1+num2;
    return 0;
}
