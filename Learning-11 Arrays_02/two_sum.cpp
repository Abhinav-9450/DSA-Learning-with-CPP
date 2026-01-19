#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int size,element,index;
    bool flag = false;
    cout<<"Enter the element to check for the sum: ";
    cin>>element;
    cout<<"Enter the size of the array: ";
    cin>>size;
    vector <int> arr(size);
    cout<<"Enter the elements: ";
    //taking inputs in vectors
    for(int i=0;i<arr.size();i++){
        cin>>arr.at(i);
    }
    //checking for the doublet times
    for(int i=0;i<(arr.size()-1);i++){
       for(int j=i+1;j<arr.size();j++){
        if(element == arr[i]+arr[j]){
            cout<<"("<<i<<" "<<j<<")"<<endl;
            }
       }
    } 
}