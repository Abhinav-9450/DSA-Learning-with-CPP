#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
  string s;
  cout<<"Enter the sentence: "<<endl;
  getline(cin,s);
  stringstream ss(s);
  string temp;
  while(ss>>temp){  //ss acts like a stream giving words from a sentence.
    cout<<temp<<endl;
  }

  cout<<s<<endl;
}