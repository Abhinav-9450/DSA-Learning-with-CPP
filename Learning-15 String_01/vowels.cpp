#include<iostream>
#include<string>
using namespace std;

int main(){
  cout<<"Enter the size of the array";
  int n;
  cin>>n;
  cout<<"Enter the characters \n";
  char str[n];
  for(int i=0;i<n;i++){
    cin>>str[i];  //input a b h i n a v s a x
  }

  int count = 0;
  for(int i=0;i<n;i++){
    if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u') count++;
  }
  cout<<"The no. of the vowels are: "<<count<<endl; //output The no. of the vowels are: 4

}