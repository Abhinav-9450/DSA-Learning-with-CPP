#include<iostream>
using namespace std;

int main(){
    int size,element;
    cout<<"Enter the size: ";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements: ";
    for(int i=0;i<size;i++) cin>>arr[i];
    cout<<"Enter the element you want to search: ";
    cin>>element;
    //search
    //check
    bool flag = false;
    for(int i=0;i<size;i++){
        if(element == arr[i]){
           flag = true;
           break;
        }
        if(flag) cout<<"The element is present in the array.";
        else cout<<"The element is not present in the array.";
        cout<<endl;
    }
}