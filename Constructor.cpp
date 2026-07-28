#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    // Creating a Constructor
    // Constructor is a special member function with the same name as of the class.
    // It is used to initialize the obj of its class
    // It is automatically invoked whenever an object us created

    Complex(void); // Constructor decleration

    void printNumber()
    {
        cout << "The complex number is " << a << " + " << b << "i" << endl;
    }
};
Complex ::Complex(void)   //---> This is a default constructor as it takes no parameter
{
    cout<<"Enter the real value of Complex number "<<endl;
    cin>>a;
    cout<<"Enter the imj value of complex number "<<endl;
    cin>>b;
    //We don't need to call it in the main fun
}

int main()
{
    Complex c1;
    c1.printNumber();

    return 0;
}



/************************Characterstics of constructor********************************
1. It should be declared in the public fun of class
2. They are automatically invoked whenever the obj is created
3. They can not return values and do  not have return types
4. It can have default arguments    
5. We can not refer to their address
*/