#include<iostream>
using namespace std;
int main(){
    int i, j=1;
    cout<<"Which table do you want ";
    cin>>i;
    cout<<endl;
    do
    {
        cout<<(i*j)<<endl;
        j++;
    } while (j<=10);

    return 0;
    
}