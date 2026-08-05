#include <iostream>
using namespace std;
class A
{
    int a;

public:
    // A & setdata(int a)
    void setdata(int a)
    {
        // a = a;  This will give garbage value so we use 'this keyword'
        this->a = a;
        // return *this;
    }
    void getdata()
    {
        cout << "The value of a is " << a << endl;
    }
};
int main()
{
    // 'this' is a keyword which is a pointer which points to the object which invoekes the member function

    A a;
    // a.setdata(4).getdata();    // if we use A & setdata(int a)  ---> then return *this ---> then this line will work
    a.setdata(4);
    a.getdata();
    return 0;
}