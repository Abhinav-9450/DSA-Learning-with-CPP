#include<iostream>
using namespace std;
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
  // making a transpose matrix of arr
  int brr[n][m];
  for(int j=0;j<n;j++){
    for(int i=0;i<m;i++){
      brr[j][i] = arr[i][j];
    }
  } 
  cout<<endl<<"MATRIX A:"<<endl;
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
     cout<<arr[i][j]<<" ";  
    }
    cout<<endl;
  }
  //printing the transpose of a matrix
  cout<<"TRANSPOSE OF MATRIX A:"<<endl;
  for(int j=0;j<n;j++){
    for(int i=0;i<m;i++){
      cout<<brr[j][i]<<" ";
    }
    cout<<endl;
  }
}
