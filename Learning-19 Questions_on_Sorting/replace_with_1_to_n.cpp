#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>

using namespace std;

int main(){
  vector<int> arr = {23,45,35,12,34,21};
  int n = arr.size();
  vector<int> visited(n,0); //0 means not visited
  int x = 0;
  for(int i=0;i<n;i++){
    int min = INT_MAX;
    int mindx = -1;
    for(int j=0;j<n;j++){
      if(visited[j] == 1){
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
    visited[mindx] = 1; //1 means visited
    x++;
  }

  for(int i =0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}