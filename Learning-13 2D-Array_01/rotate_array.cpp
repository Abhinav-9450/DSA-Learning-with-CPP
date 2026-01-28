#include<iostream>
using namespace std;
int main(){
    int m;
  cout<<"Enter the rows and coloumn for the square matrix: ";
  cin>>m;
  cout<<"Enter the elements:"<<endl;
  int arr[m][m];
  for(int i=0;i<m;i++){
    for(int j=0;j<m;j++){
      cin>>arr[i][j];
    }
  }
    cout<<endl<<"MATRIX A:"<<endl;
  for(int i=0;i<m;i++){
    for(int j=0;j<m;j++){
     cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
  // algorithm for swapping to get transpose and storing in the same array
  // logic: for i we'll go from 0 to row-2; //in the last row no benefit of doing anychanges in it as it will give the same output.
  // logic: for j we ll go from i+1 to row-1;
  // and then swap arr[i][j] and arr[j][i] through the entire loop  
  for(int i=0;i<m-1;i++){
    for(int j=i+1;j<m;j++){
      int temp = arr[i][j];
      arr[i][j] = arr[j][i];
      arr[j][i] = temp;
    }
  }

  // for rotating we have to reverse each row
  // algorithm for reversing 
  // logic: i moves from 0 to size-1
  // logic: j moves from 0 to size/2 (if we traverse the full array it wont be reversed it will come same)
  // logic: reverse arr[i][j] with arr[i][size-1-j]
  for(int i=0;i<m;i++){
    for(int j=0;j<m/2;j++){
      int temp = arr[i][j];
      arr[i][j] = arr[i][m-1-j];
      arr[i][m-1-j] = temp;
    }
  }
  cout<<"ROTATED ARRAY 90 DEGREE CLOCKWISE:"<<endl;
  for(int i=0;i<m;i++){
    for(int j=0;j<m;j++){
     cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
}