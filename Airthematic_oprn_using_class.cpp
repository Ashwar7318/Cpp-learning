#include<iostream>
using namespace std;
class operations{
    float a,b,c;
    public:
        void read(void);
        void addition(void);
        void substraction(void);
        void division(void);
        void multiplication(void);
};
void operations::read(void){
    cout<<"enter the first number ";
    cin>>a;
    cout<<"Enter the second number ";
    cin>>b;
}
void operations::addition(void){
    c = a+b;
    cout<<"The sum of the numbers is "<<c<<endl;
}
void operations::substraction(void){
    if(a>b){
        c=a-b;
        cout<<"Substraction result is "<<c<<endl;
    }
    else{
        c=b-a;
        cout<<"Substraction result is "<<c<<endl;
    }
}
void operations::division(void){
    c=a/b;
    cout<<"The division is "<<c<<endl;
}
void operations::multiplication(void){
    c=a*b;
    cout<<"The multiplication is "<<c<<endl;
}


int main()
{
    operations z;
    
    z.read();
    z.addition();
    z.substraction();
    z.multiplication();
    z.division();
    return 0;
}