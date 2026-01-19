// sort positive and the negative numbers
#include<iostream>
#include<vector>
using namespace std;


void show(vector<int>a){
    for(int i=0;i<a.size();i++) cout<<a[i]<<" ";
    cout<<endl;
}

void sort(vector<int>& a){
    int first = 0 ,last = a.size() - 1;
    while(first<last){
        if(a[first]>=0 && a[last]<0){
            int temp = a[first];
            a[first] = a[last];
            a[last] = temp;
            first++;
            last--;
        }
        if(a[first]<0) first++;
        if(a[last]>=0) last--;
    }
}
int main() 
{
    vector<int>arr;
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    cout<<"Enter the elements: "<<endl;
    for(int i=1;i<=size;i++){
        int element;
        cin>>element;
        arr.push_back(element);
    }
    show(arr);
    sort(arr);
    show(arr);
}    
