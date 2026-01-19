#include<iostream>
#include<vector>
using namespace std;

vector<int> merge_sort(vector<int>&a, vector<int>&b){
    int m = a.size(), n = b.size();
    vector<int>arr;
    int i=0,j=0,k=0;
    while(i<m && j<n){
        if(a[i]<b[j]){
            arr.push_back(a[i]);
            i++;
        }
        else{
            arr.push_back(b[j]);
            j++;
        }    
    }
    if(i==m){
            while(j<n){
                arr.push_back(b[j]);
                j++;
            }
        }
    if(j==n){
            while(i<m){
                arr.push_back(a[i]);
                i++;
            }
        }
        return arr;
}

void show(vector<int>a){
    for(int i=0;i<a.size();i++) cout<<a[i]<<" ";
    cout<<endl;
}

int main() 
{
    vector<int>a,b;
    int size;
    cout<<"Enter the size of the first array: ";
    cin>>size;
    cout<<"Enter the elements: "<<endl;
    for(int i=1;i<=size;i++){
        int element;
        cin>>element;
        a.push_back(element);
    }
    cout<<"Enter the size of the second array: ";
    cin>>size;
    cout<<"Enter the elements: "<<endl;
    for(int i=1;i<=size;i++){
        int element;
        cin>>element;
        b.push_back(element);
    }
    show(a);
    show(b);
    vector<int>c = merge_sort(a,b);
    show(c);
}