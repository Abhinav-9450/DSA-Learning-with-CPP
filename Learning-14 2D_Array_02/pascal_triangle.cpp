#include<iostream>
using namespace std;

int main(){
  int r;
  cout<<"Enter the no. of rows: ";
  cin>>r;
  cout<<"The pascals triangle is as follows: "<<endl;
  for(int i=0;i<r;i++){
    int num=1;
    for(int j=0;j<=i;j++){
      if(i==0){
        cout<<num<<" ";
      }
      else{
        cout<<num<<" ";
        num = num*(i-j)/(j+1);
      }
    }
    cout<<endl;
  }
}
