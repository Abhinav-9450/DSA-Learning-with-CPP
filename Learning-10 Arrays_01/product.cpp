#include<iostream>
using namespace std;

int main(){
    int size,product=1;
    cout<<"Enter the size: ";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements: ";
    for(int i=0;i<size;i++) cin>>arr[i];
    for(int i=0;i<size;i++) product*=arr[i];
    cout<<"The product of all the elements is: "<<product<<endl;
} 