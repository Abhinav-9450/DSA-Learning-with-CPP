#include<iostream>
#include<vector>
using namespace std;

int main(){
    int size,n;
    vector <int> arr;
    cout<<"Enter the size of the array: ";
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>n;
        arr.push_back(n);
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    vector <int> brr = arr;
    //reverse array
    for(int i=0;i<size/2;i++){ 
       int temp = brr[i];
       brr[i] = brr[size-1-i];
       brr[size-1-i] = temp;
    }
    for(int i=0;i<size;i++){
        cout<<brr[i]<<" ";
    }
}