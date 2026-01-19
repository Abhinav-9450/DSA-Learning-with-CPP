#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no. of students: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the marks: ";
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<"Roll no. with less than 35: "<<endl;
    for(int i=0;i<n;i++) {
        if(arr[i]<35) cout<<i<<" "<<arr[i]<<endl;
    }
    }