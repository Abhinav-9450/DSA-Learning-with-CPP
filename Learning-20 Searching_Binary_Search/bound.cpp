#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

int main(){
  int target = 14;
  int arr[] = {1,2,3,4,9,10,13,16,17,18,20,24,27,26};
  int n = sizeof(arr)/sizeof(arr[0]) ;
  int lo = 0;
  int hg = n-1;
  bool flag = false;
  for(int i = 0; i<n; i++){
    int mid = (lo+hg)/2;
    if(arr[mid] == target){
      cout<<"The lower and upper bound is: "<<target<<endl;
      flag = true;
      break;
    }
    else if(arr[mid] < target){
      lo = mid+1;
    }
    else{
      hg = mid-1;
    }
  }
  if(!flag){
  cout<<"The lower Bound is "<<arr[hg]<<endl;
  cout<<"The upper Bound is "<<arr[lo]<<endl;
  }

}