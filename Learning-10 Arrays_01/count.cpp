#include<iostream>
using namespace std;

int main(){
    int size,element;
    cout<<"Enter the size: ";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements: ";
    for(int i=0;i<size;i++) cin>>arr[i];
    cout<<"Enter the element which you want to check:  ";
    cin>>element;
    //search
    //check
    int count=0;
    for(int i=0;i<size;i++){
        if(element < arr[i]){
           count++;
        }
    }
    cout<<"The no. of elements greater than "<<element<<" is "<<count;
    cout<<endl;
}