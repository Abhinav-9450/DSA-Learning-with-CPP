#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

int main(){
    int target = 6;
  int arr[] = {1,1,1,1,2,2,2,6,6,6,8,8,8,9,9,9,10,10,15,15,16,16};
  int n = sizeof(arr)/sizeof(arr[0]) ;
  int lo = 0;
  int hg = n-1;
  bool flag = false; 
  while (lo<=hg){
    int mid = (lo+hg)/2;
    if(arr[mid] == target) {
    flag = true;
    if(arr[mid-1] == target){
      hg = mid-1;
    }
    else{
      cout<<"The first occurence is at index "<<mid<<endl;
      break;
    }
    }
    else if(arr[mid] < target){
      lo = mid+1;
    }
    else{
      hg = mid-1;
    }
  }

  if(!flag){
    cout<<"Not Found."<<endl;
  }
}