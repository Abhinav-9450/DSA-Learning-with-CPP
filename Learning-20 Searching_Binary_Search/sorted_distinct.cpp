#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
  int arr[] = {0,1,2,3,4,5,6,7,9,10,14,23,25};
  int n = sizeof(arr)/sizeof(arr[0]);
  int target = 16;
  int pass = 0;
  int low = 0;
  int high = n-1;
  int ans = -1;
  while(low<=high){
    int mid = (low+high)/2;
    if(arr[mid] == mid){
      low = mid+1;
    }

    else {
    high = mid - 1;
    ans = mid;
    }
  }
  if(ans>=0){
    cout<<"The first missing number is: "<<ans<<endl;
  }
  else{
    cout<<"There is no missing number."<<endl;
  }

  //Linear Approach
  for(int i=0;i<n;i++){
    if(arr[i] != i){
      cout<<"The first missing number is: "<<i<<endl;
      break;
    }
  }
}