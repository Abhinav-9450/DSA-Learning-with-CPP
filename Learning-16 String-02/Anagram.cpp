#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

//Leetcode 242.
int main(){
  cout<<"Enter the first string: ";
  string s;
  getline(cin,s);

  cout<<"Enter the second string: ";
  string t;
  getline(cin,t);

  sort(s.begin(),s.end());
  sort(t.begin(),t.end());

  if(s==t) cout<<"Strings are anagram."<<s<<endl;
}