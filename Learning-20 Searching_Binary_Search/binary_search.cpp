#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

int main(){
  int arr[] = {1,2,3,6,7,9,10,13,14,17,19,23,24,25};
  int n = sizeof(arr)/sizeof(arr[0]);
  int target = 16;
  int pass = 0;
  int low = 0;
  int high = n-1;
  while(low<=high){
    int mid = (low+high)/2;
    cout<<pass<<" "<<arr[mid]<<endl;
    pass++;
    if(arr[mid] == target){
      cout<<"Found the number at index "<<mid<<endl;
      break;
    }
    else if(arr[mid] < target){
      low = mid+1;
    }
    else high = mid - 1;
  }
  if(low>high) cout<<"Not Found"<<endl;
}