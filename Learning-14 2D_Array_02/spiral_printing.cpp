#include<iostream>
using namespace std;

int main(){
  int r;
  cout<<"Enter the row of the array: ";
  cin>>r;

  int c;
  cout<<"Enter the coloumn of the array: ";
  cin>>c;

  cout<<"Enter the elements of the array: "<<endl;
  
  //taking the values of the array:
  int arr[r][c];
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


  //spiral printing
  //logic 1 loop has 4 loops inside
  //up,down,left,right
  //maintain the steps
  int steps=0,up=0,left=0,down=r-1,right=c-1;
  while(up<=down&&left<=right){
    //left->right printing
    if(left<=right){ 
      for(int i = left;i<=right;i++){
      cout<<arr[up][i]<<" ";
      steps++;
    }
    up++;}
   

    //up->down printing
    //coloumn wise printing
    if(up<=down){
      for(int i=up;i<=down;i++){
      cout<<arr[i][right]<<" ";
      steps++;
    }
    right--;
    }
    

    //right->left printing 
    //reverse row printing
    if(right>=left){
     for(int i=right;i>=left;i--){
      cout<<arr[down][i]<<" ";
      steps++;
    }
    down--;
    }
  

    //down->up printing 
    //reverse coloumn printing
    if(down>=up){
       for(int i=down;i>=up;i--){
      cout<<arr[i][left]<<" ";
      steps++;
    }
    left++;
    }
   
  }


}