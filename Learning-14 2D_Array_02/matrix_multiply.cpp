#include<iostream>
using namespace std;

int main(){
  int a;
  cout<<"Enter the row of the first matrix:";
  cin>>a;

  int b;
  cout<<"Enter the coloumn of the first matrix:";
  cin>>b;

  int c;
  cout<<"Enter the row of the second matrix:";
  cin>>c;

  int d;
  cout<<"Enter the coloumn of the second matrix:";
  cin>>d;

  if(b==c){
    int arr[a][b];
    int brr[c][d];
    int crr[a][d];

    //Entering the elements of the first matrix:
    cout<<"Enter the elements of the first matrix:"<<endl;
    for(int i=0;i<a;i++){
      for(int j=0;j<b;j++){
        cin>>arr[i][j];
      }
    }

    //Entering the element of the second matrix:
    cout<<"Enter the elements of the second matrix:"<<endl;
    for(int i=0;i<c;i++){
      for(int j=0;j<d;j++){
        cin>>brr[i][j];
      }
    }

    //Calculating the value of the third matrix:
    //Logic three loop will work third loop will go upto common i.e. b or c.
     for(int i=0;i<a;i++){
      for(int j=0;j<d;j++){
        int sum = 0;
        for(int k=0;k<c;k++){
          sum = sum + arr[i][k]*brr[k][j];
        }
        crr[i][j] = sum;
      }
    }
     for(int i=0;i<a;i++){
      for(int j=0;j<d;j++){
       cout<<crr[i][j]<<" ";
      }
      cout<<endl;
    }
  }
  else{
    // code will not work as the condition for the matrix multiplication doesnt matches;
    cout<<"Matrix Multiplication is not possible for the given two matrices.";
  }
}