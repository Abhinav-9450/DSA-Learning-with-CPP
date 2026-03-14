// find the element that has occurred more than size/2 times in a array:

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
  vector<int> arr = {1,2,2,2,2,2,1,2,3,3,3};

  //brute force method
  cout<<"Welcome"<<endl;
  int n = arr.size();
  for(int i=0;i<n;i++){
    int count = 1;
    for(int j=i+1;j<n;j++){
      if (arr[j]==arr[i]) count++;
    }
    if(count>n/2){
      cout<<arr[i]<<endl;
      break;
    }
  }

  //optimised
  sort(arr.begin(),arr.end());
  cout<<arr[arr.size()/2]<<endl;
}