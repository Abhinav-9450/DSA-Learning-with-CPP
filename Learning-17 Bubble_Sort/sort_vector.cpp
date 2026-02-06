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

  // time complexity of this sorting is O(nlogn)
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;

  //sorting the array in the ascending order using sort function.
  sort(arr.begin(), arr.end());

  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;

  //sorting the array in the descending order using reverse function.
  reverse(arr.begin(), arr.end());

  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;

}