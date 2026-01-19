#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int size,element,index;
    bool flag = false;
    cout<<"Enter the size of the array: ";
    cin>>size;
    vector <int> arr(size);
    cout<<"Enter the elements: ";
    for(int i=0;i<arr.size();i++){
        cin>>arr.at(i);
    }
    cout<<"Enter the element to check its last occurence: ";
    cin>>element;
    for(int i=(arr.size()-1);i>=0;i--){
       if(element == arr.at(i)){
        flag = true;
        index = i;
        break;
       } 
    }
    if(flag){
        cout<<"The last index of the element is "<<index<<endl;
    }
    else{
        cout<<"Element not found."<<endl;
    }
}