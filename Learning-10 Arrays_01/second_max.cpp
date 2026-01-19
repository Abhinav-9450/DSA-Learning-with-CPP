#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n,max,second_max;
    cout<<"Enter the size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++) cin>>arr[i];
    max = INT_MIN;
    second_max = INT_MIN;
    for(int i=0;i<n;i++) {
        if(max<arr[i]){
            max = arr[i];
        }
        else if(second_max<arr[i]&&arr[i]!=max){
            second_max = arr[i];
        }
    }
    cout<<"The maximum element is "<<max<<endl;
    cout<<"The second maximum element is "<<second_max<<endl;
    }