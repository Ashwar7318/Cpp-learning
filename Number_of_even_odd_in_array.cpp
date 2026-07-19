#include<iostream>
using namespace std;

int main(){
    int i,k;
    int even=0;
    int odd=0;
    cout<<"Enter the size of array ";
    cin>>i;
    int arr[i];
    for(int j=0; j<i; j++){
        cout<<"Enter the value to enter in array ";
        cin>>k;
        cout<<"The value at place "<<j<<" is "<<k<<endl;
        if(k%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    cout<<"The number of even value in array is "<<even<<endl;
    cout<<"The number of odd value in array is "<<odd<<endl;
    return 0;
}