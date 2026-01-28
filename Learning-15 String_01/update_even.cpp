#include<iostream>
#include<string>
using namespace std;

int main(){
  string str;
  cout<<"Enter the string: \n";
  getline(cin,str);
  int len = str.length(); // or str.size()
  for(int i=0;i<len;i++){
    if(i%2 == 0) str[i] = 'a';
  }
  cout<<"The new string is "<<str<<endl;
  return 0;
}