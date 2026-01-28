#include<iostream>
#include<climits>
using namespace std;
int main(){
  int m,n;
  int max = INT_MIN;
  cout<<"Enter the rows: ";
  cin>>m;
  cout<<"Enter the coloumns: ";
  cin>>n;
  int arr[m][n];
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      cin>>arr[i][j];
    }
  }
  //max element
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      if(max<arr[i][j]) max = arr[i][j];
    }
  }
  cout<<"Maximum element in the array is "<<max<<endl;
}