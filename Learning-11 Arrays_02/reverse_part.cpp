#include<iostream>
#include<vector> 
using namespace std;

void show(vector <int> arr){
    for(int i=0;i<arr.size();i++) cout<<arr[i]<<" ";
    cout<<endl;
}

void reverse(int i,int j,vector<int>&a){
    while(i<j){ 
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
}
void reverse(vector<int>& a){
    int i=0,j=a.size()-1;
     while(i<j){ 
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
}
int main(){
    vector<int>arr;
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    cout<<"Enter the elements: ";
    for(int i=1;i<=size;i++){
        int element;
        cin>>element;
        arr.push_back(element);
    }
    int start,end;
    cout<<"Enter the starting and the ending index to reverse the array: ";
    cin>>start>>end;
    show(arr);
    reverse(start,end,arr);
    show(arr);
}