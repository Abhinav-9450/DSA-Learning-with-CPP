#include<iostream>
#include<vector>
using namespace std;

void show(vector<int>a){
    for(int i=0;i<a.size();i++) cout<<a[i]<<" ";
    cout<<endl;
}

void next_permutation(vector<int>&a){
    int n = a.size();
    int pivot = -1;
    for(int i = n-1;i>0;i--){
        if(a[i]>a[i-1]){
            pivot = i;
            break;
        }
    }
    if(pivot != -1){
        int i = pivot;
        int j = n-1;
        while(i<j){
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;
            j--;
        }
        for(int i = pivot;i < n-1; i++){
            if(a[i]>a[pivot-1]){
                int temp = a[i];
                a[i] = a[pivot-1];
                a[pivot-1] = temp;
            }
        }
    }
    else{
        int i = 0;
        int j = n-1;
        while(i<j){
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;
            j--;
        }
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
    next_permutation(arr);
    show(arr);
}    
