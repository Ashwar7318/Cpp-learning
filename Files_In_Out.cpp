#include <iostream>
#include <fstream>
using namespace std;
/*The useful classes for working with files in c++ are:
    1. fstreambase
    2. ifstream --> derived from fsterambase
    3. ofstream --> derived from fstreambase
*/

// In order to work with files in C++, you will have to open it. There are two ways to open a file:
// 1. Using the constructor
// 2. Using the member function open() of the class

int main()
{
    // Opening file using constructor and writing in it
    string st = "How are you";
    string st1;
    ofstream out("Sample60.txt"); // Write operation
    out << st;

    // Opening file using constructor and reading it.
    ifstream in("Sample60b.txt"); // Reading operation
    getline(in, st1);
    cout << st1;
    return 0;
}