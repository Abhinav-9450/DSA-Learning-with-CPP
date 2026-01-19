#include<iostream>
#include<vector>
using namespace std;

void show(vector<int>a){
    for(int i=0;i<a.size();i++) cout<<a[i]<<" ";
    cout<<endl;
}
void rainwater(vector<int>&arr){
    // arr here is 0 1 0 2 1 0 1 3 2 1 2 1
    int n = arr.size();
    int greatest = -1;
    vector<int>brr;
    // created a previous greatest element array
    // -1 0 1 1 2 2 2 2 3 3 3 3
    for(int i=0;i<n;i++){
        brr.push_back(greatest);
        if(greatest<arr[i]) greatest = arr[i];
    } 
    show(brr);

    // creating a next greatest element in brr and also finding the minimum of the two element of prev and next
    // -1 0 1 1 2 2 2 2 3 3 3 3
    // 3 3 3 3 3 3 3 2 2 2 1 -1
    // -1 0 1 1 2 2 2 2 2 2 1 -1
    greatest = arr[n-1];
    brr[n-1] = -1;
    for(int i=n-2;i>=0;i--){
        if(greatest<brr[i]){
            brr[i]=greatest;
        }
        if(greatest<arr[i]) greatest = arr[i];
    }
    show(brr);
    int sum = 0;
    for(int i=0;i<n;i++){
        if(brr[i]>arr[i]) sum += (brr[i]-arr[i]);
    }
    cout<<"The collected rainwater is "<<sum<<endl;
}

int main() 
{
    vector<int>a;
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    cout<<"Enter the elements: "<<endl;
    for(int i=1;i<=size;i++){
        int element;
        cin>>element;
        a.push_back(element);
    }
    show(a);
    rainwater(a);
}