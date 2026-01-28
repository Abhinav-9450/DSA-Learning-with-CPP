#include<iostream>
#include<string>
using namespace std; 

int main(){
  //string is a data type or class here
  string s = "abhinav saxena";
  cout<<s<<endl; 
  //taking input
  cin>>s; //input my name is abhinav saxena
  cout<<s; //output my

  //solving the spaces problem
  getline(cin,s); //input my name is abhinav saxena
  cout<<s<<endl; //output my name is abhinav saxena
}