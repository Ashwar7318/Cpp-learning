#include <iostream>
using namespace std;
class Discount;
class Book
{
    friend int finalprice(Book a, Discount b);
    float price;

public:
    void setdata(void)
    {
        cout << "Enter the price of the book " << endl;
        cin >> price;
    }
    void getdata(void)
    {
        cout << "The price of the book is " << price << endl;
    }
};
class Discount
{
    friend int finalprice(Book a, Discount b);
    float off;

public:
    void setdata(void)
    {
        cout << "Enter the discount percentage on the book " << endl;
        cin >> off;
    }
    void getdata(void)
    {
        cout << "The discount on the book is " << off << endl;
    }
};

int finalprice(Book a, Discount b)
{
    float x;
    x = ((a.price) - ((b.off / 100) * a.price));
    cout << "The final price of the book is " << x << "rs" << endl;
}

int main()
{
    Book a1;
    a1.setdata();
    a1.getdata();

    Discount b1;
    b1.setdata();
    b1.getdata();

    finalprice(a1, b1);

    return 0;
}