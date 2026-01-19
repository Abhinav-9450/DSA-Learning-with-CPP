#include<iostream>
#include<vector> 
using namespace std;

void show(vector <int> arr){
    for(int i=0;i<arr.size();i++) cout<<arr[i]<<" ";
    cout<<endl;
}

void reverse_part(int i,int j,vector<int>&a){
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
    cout<<"Enter the elements: "<<endl;
    for(int i=0;i<size;i++){
        int element;
        cin>>element;
        arr.push_back(element);
    }
    int k;
    cout<<"Enter the no. of rotation: ";
    cin>>k;
    k=k%size;
    show(arr);
    cout<<"rotated"<<endl;
    if(k!=0){
        reverse(arr);
        reverse_part(0,k-1,arr);
        reverse_part(k,size-1,arr);
    }
    show(arr);

}