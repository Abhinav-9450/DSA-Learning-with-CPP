#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

int main(){
  int target = 196;
  int low = 0;
  int high = target;
  while(low<=high){
    int mid = (low+high)/2;
    if(mid*mid == target){
      cout<<"The sqrt of the number is "<<mid<<endl;
      break;
    }
    else if(mid*mid < target){
      low = mid+1;
    }
    else high = mid - 1;
  }
  if(low>high) cout<<"The sqrt of the number is "<<high<<endl;
}