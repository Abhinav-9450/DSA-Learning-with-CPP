#include<iostream>
#include<vector>
using namespace std;

void show(vector<int>&a){
    for(int i=0;i<a.size();i++) cout<<a[i]<<" ";
    cout<<endl;
}

//low mid and high ke terms mai soch rhe mid is k here
void sort(vector<int>& a){
    int n = a.size();
    //k is sorting the i as there both starting positions are same.
    int i=0,j=n-1,k=0;
    while(k<j){
        if(a[k]==2){
            a[k]=a[j];
            a[j]=2;
            j--;
        }
        if(a[k]==0){
            a[k]=a[i];
            a[i]=0;
            k++;
            i++;
        }
        if(a[k]==1){
            k++;
        }
    }
return;    
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