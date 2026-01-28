#include<iostream>
using namespace std;

int main(){
  int r;
  cout<<"Enter the rows: ";
  cin>>r;

  int c;
  cout<<"Enter the coloumns: ";
  cin>>c;

  int arr[r][c]; // this will give error but it will work cause you know the variable sizes are not given to the 2d array:

  //taking input of the array:
  cout<<"Enter the elements of the array: "<<endl;
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      cin>>arr[i][j];
    }
  }

  //dispalying the array:
    cout<<"Displaying the array: "<<endl;
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }

  cout<<"Displaying the array in wave form: "<<endl;
  //logic is we are going to use the odd and even condition on coloumn since its coloumn printing:
  //coloumn is outer loop:
  // rows will be the inner loop:
  //printing will be like col 1->2->3->4->5...and so on
   for(int i=0;i<c;i++){
   if(i%2==0){ // coloumn is even do the normal printing of the coloumn:
    for(int j=0;j<r;j++){
      cout<<arr[j][i]<<" ";
    }
   }
   else{ //coloumn is odd do the reverse printing of the coloumn:
    for(int j=r-1;j>=0;j--){
      cout<<arr[j][i]<<" ";
    }
   }
  }
}

