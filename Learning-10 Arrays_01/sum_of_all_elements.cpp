#include<iostream>
using namespace std;

int main(){
    int size,sum=0;
    cout<<"Enter the size: ";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements: ";
    for(int i=0;i<size;i++) cin>>arr[i];
    for(int i=0;i<size;i++) sum+=arr[i];
    cout<<"The sum of all the elements is: "<<sum<<endl;
}