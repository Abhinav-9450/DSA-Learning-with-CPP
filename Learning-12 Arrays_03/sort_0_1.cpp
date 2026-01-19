// two pass method
#include<iostream>
#include<vector>
using namespace std;

void show(vector<int>a){
    for(int i=0;i<a.size();i++) cout<<a[i]<<" ";
    cout<<endl;
}

void sort01(vector<int>& a){
    // 2 pass method where the time complexity is O(n) taking the time equal to 2n.
    int no0 = 0;
    int n = a.size();
    for(int i=0;i<n;i++){
        if(a[i]==0) no0++;
    }
    for(int i=0;i<n;i++){
        if(i<no0) a[i]=0;
        else a[i]=1;
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
    sort01(arr);
    show(arr);
}    
