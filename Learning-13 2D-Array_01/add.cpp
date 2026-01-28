#include<iostream>
using namespace std;
int main(){
  int m,n;
  cout<<"Enter the rows: ";
  cin>>m;
  cout<<"Enter the coloumns: ";
  cin>>n;
  cout<<"Enter "<<m*n<<" for first matrix: ";
  int arr[m][n],brr[m][n],crr[m][n];
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      cin>>arr[i][j];
    }
  }
   cout<<"Enter "<<m*n<<" for second matrix: ";
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      cin>>brr[i][j];
    }
  }
  cout<<"MATRIX A"<<endl;
   for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
  cout<<"MATRIX B"<<endl;
   for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      cout<<brr[i][j]<<" ";
    }
    cout<<endl;
  }
  cout<<"MATRIX C(added matrix)"<<endl;
   for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      crr[i][j]=arr[i][j]+brr[i][j];
      cout<<crr[i][j]<<" ";
    }
    cout<<endl;
  }
}