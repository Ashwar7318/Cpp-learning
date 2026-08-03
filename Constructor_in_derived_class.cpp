#include <iostream>
using namespace std;
/*

Case 1:
class B : public A {
    first A() then B()  -->>order of execution of constructor
};

Case 2:
class A : public B, public C {
    order of execution of constructor -->B() then C() and A()
};

Case 3:
class A : public B, virtual public C {
    order of execution of constructor --> C() then B() and A()
};

*/

class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "Base1 class constructor called " << endl;
    }
    void print_dataBase1(void)
    {
        cout << "The value of data1 is " << data1 << endl;
    }
};
class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "Base2 class constructor called " << endl;
    }
    void print_dataBase2(void)
    {
        cout << "The value of data2 is " << data2 << endl;
    }
};
class Derived : public Base1, public Base2
{
    int derived1, derived2;

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout << "Derived class constructor called " << endl;
    }
    void print_dataDerived(void)
    {
        cout << "The value of derived1 is " << derived1 << endl;
        cout << "The value of derived2 is " << derived2 << endl;
    }
};

int main()
{
    Derived Ashwar(1, 2, 3, 4);
    Ashwar.print_dataBase1();
    Ashwar.print_dataBase2();
    Ashwar.print_dataDerived();

    return 0;
}