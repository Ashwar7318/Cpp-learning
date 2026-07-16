#include<iostream>

using namespace std;

int d=6;
void sum()
{
    cout<<"If code written out side the main function it will print global value of d which is "<<d;
}
int main()
{
    // int a=4;
    // int b=5;
    int a=14, b=15, d=10;
    float pi=3.14;
    char c='u';
    cout<<"Ashwar Srivastava \nThe value of a is "<<a<<". \nThe value of b is "<< b;
    cout<<"\nThe value of pi is "<<pi;
    cout<<"\nThe value of c is "<<c;
    cout<<"\nIf code written inside the main function it will print local value of d which is "<<d<<"\n";
    sum();
    return 0;
}