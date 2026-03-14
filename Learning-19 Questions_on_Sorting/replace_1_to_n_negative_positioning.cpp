#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>

using namespace std;

int main(){
  vector<int> arr = {23,45,35,12,34,21};
  int n = arr.size();
  int x = 0;
  for(int i=0;i<n;i++){
    int min = INT_MAX;
    int mindx = -1;
    for(int j=0;j<n;j++){
      if(arr[j] <= 0){
        continue;
      }
      else{
        if(min>arr[j]){
          min = arr[j];
          mindx = j;
        }
      }
    }

    arr[mindx] = x; //replacing with the sequence of the numbers
    x--;
  }

  for(int i =0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;

  for(int i =0;i<n;i++){
    cout<<-arr[i]<<" "; //negative sign in front of the arr to get the positive ranks value
  }
}