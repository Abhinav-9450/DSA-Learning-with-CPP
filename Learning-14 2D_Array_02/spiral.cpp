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
  //logic is we are going to use the odd and even condition on i:
  // row is the outer loop
  //row printing is as follows: row 1->2->3->4->5->6... and so on.
   for(int i=0;i<r;i++){
   if(i%2==0){ // row is even do the normal printing of the row coloumn from 0 to c-1:
    for(int j=0;j<c;j++){
      cout<<arr[i][j]<<" ";
    }
   }
   else{ //row is odd do the reverse printing of the row coloumn from c-1 to 0:
    for(int j=c-1;j>=0;j--){
      cout<<arr[i][j]<<" ";
    }
   }
  }
  cout<<endl;

  // spiral printing 2
  cout<<"Printing the 2nd pattern of spiral: "<<endl;
    for(int i=0;i<r;i++){
   if(i%2!=0){ // row is even do the normal printing of the row coloumn from 0 to c-1:
    for(int j=0;j<c;j++){
      cout<<arr[i][j]<<" ";
    }
   }
   else{ //row is odd do the reverse printing of the row coloumn from c-1 to 0:
    for(int j=c-1;j>=0;j--){
      cout<<arr[i][j]<<" ";
    }
   }
  }
  cout<<endl;
  //Printing the third spiral printing:
    cout<<"Printing the 3rd pattern of spiral: "<<endl;
    int n=0;
    for(int i=r-1;i>=0;i--){
   if(n%2==0){ // row is even do the normal printing of the row coloumn from 0 to c-1:
    for(int j=0;j<c;j++){
      cout<<arr[i][j]<<" ";
    }
   }
   else{ //row is odd do the reverse printing of the row coloumn from c-1 to 0:
    for(int j=c-1;j>=0;j--){
      cout<<arr[i][j]<<" ";
    }
   }
   n++;
  }
  cout<<endl;

   cout<<"Printing the 4th pattern of spiral: "<<endl;
    n=0;
    for(int i=r-1;i>=0;i--){
   if(n%2!=0){ // row is even do the normal printing of the row coloumn from 0 to c-1:
    for(int j=0;j<c;j++){
      cout<<arr[i][j]<<" ";
    }
   }
   else{ //row is odd do the reverse printing of the row coloumn from c-1 to 0:
    for(int j=c-1;j>=0;j--){
      cout<<arr[i][j]<<" ";
    }
   }
   n++;
  }
  cout<<endl;

}