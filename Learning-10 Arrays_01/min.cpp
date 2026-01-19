#include<iostream>
using namespace std;

int main(){
    int n,min;
    cout<<"Enter the size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++) cin>>arr[i];
    min = arr[0];
    for(int i=1;i<n;i++) if(min>arr[i]) min = arr[i];
    cout<<"The minimum element is "<<min<<endl;
    }