#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

int main(){
  int target = 46;
  bool flag = false;
  int arr[] = {1,4,32,123,3234,2,12,45,65,67,43};
  cout<<sizeof(arr)/sizeof(arr[0])<<endl;
  for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
    if(arr[i] == target){
      cout<<"Found the number "<<target<<" in the array."<<endl;
      flag = true; 
      break;
    }
  }
  if(!flag) cout<<"Not Found"<<endl;
}