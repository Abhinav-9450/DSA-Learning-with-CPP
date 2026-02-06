#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  vector<int> arr;
  cout<<"Enter the size of the array: ";
  int n;
  cin>>n;
  cout<<"Enter the elements";
  for(int i=0;i<n;i++){
    int el;
    cin>>el;
    arr.push_back(el);
  }

  cout<<endl;

  for(int i=0; i<n-1; i++)
  {
    cout<<i+1<<" Pass:"<<endl;

    for(int j=1; j<n-i; j++)
    {
      if(arr[j-1]==0 && arr[j]!=0){ //if the previous number is zero and the current number is a number then swap.
        int temp = arr[j];
        arr[j] = arr[j-1];
        arr[j-1] = temp;
      }

      for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
  }
  cout<<endl;
  }
  
  cout<<endl;
  }

}