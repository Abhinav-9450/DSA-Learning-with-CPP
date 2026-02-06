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

  for(int i=0; i<n-1; i++){
    cout<<i+1<<" Pass:"<<endl;

    bool flag = true; //to track that if the array is getting swapped or not

    for(int j=1; j<n-i; j++){

      if(arr[j]<arr[j-1]){
        flag = false; //if swapped then change the value of flag as false
        int temp = arr[j];
        arr[j] = arr[j-1];
        arr[j-1] = temp;
      }

      for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
  }

  cout<<endl;
    }

    if(flag){
      break;   // if the flag comes true this means no swap takes 
      //place and if no swap takes place this means 
      // the array is already sorted so break it.
    }

  cout<<endl;
  }

}