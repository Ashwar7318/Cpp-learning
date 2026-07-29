/*Hospital Management

Create a base class Patient with patient ID, name, and age.
Derive a class InPatient with room number and number of days admitted.
Calculate the total hospital bill assuming a fixed room charge per day.*/

#include <iostream>
using namespace std;

class Patient
{
public:
    int PatientID;
    string name;
    int age;
    void setdata(void)
    {
        cout << "Enter the ID of the patient " << endl;
        cin >> PatientID;
        cin.ignore();
        cout << "Enter the name of the patient " << endl;
        getline(cin, name);
        cout << "Enter the age of the patient " << endl;
        cin >> age;
    }
};
class InPatient : public Patient
{
public:
    int roomNum;
    int days;
    int TotalBill;
    int ChargePerDay = 200;
    void indata(void)
    {
        cout << "Enter the room number of the patient " << endl;
        cin >> roomNum;
        cout << "Enter the number of days of patient admitted in Hospital " << endl;
        cin >> days;
    }
    void getdata(void)
    {
        cout << "The charge per day is 200 Rs" << endl;
        TotalBill = ChargePerDay * days;
        cout << "Your total bill is " << TotalBill << endl;
    }
};

int main()
{
    InPatient p1;
    p1.setdata();
    p1.indata();
    p1.getdata();

    return 0;
}