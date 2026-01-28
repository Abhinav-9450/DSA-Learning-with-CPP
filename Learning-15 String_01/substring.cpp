#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
  string s;
  cout<<"Enter the string:"<<endl;
  getline(cin,s);
  int size = s.size();
  //index to end character
  string sub = s.substr(size/2);
  cout<<sub<<endl;
  //index to total length
  string sub_index = s.substr(3,6);
  cout<<sub_index<<endl;
}