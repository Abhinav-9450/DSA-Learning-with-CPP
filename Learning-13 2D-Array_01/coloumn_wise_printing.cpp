#include<iostream>
using namespace std;
#include<vector>

int main(){
  int m,n;
  cout<<"Enter the rows: ";
  cin>>m;
  cout<<"Enter the coloumns: ";
  cin>>n;
  cout<<"Enter the elements:"<<endl;
  int arr[m][n];
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      cin>>arr[i][j];
    }
  }
  cout<<endl<<"MATRIX A:"<<endl;
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
     cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
  cout<<"TRANSPOSE A:"<<endl;
  for(int j=0;j<n;j++){
    for(int i=0;i<m;i++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
}
