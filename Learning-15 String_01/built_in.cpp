#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

//methods of the string built in
int main(){
  string s = "abhinav";
  cout<<s<<endl;
  reverse(s.begin(),s.end());
  cout<<"reversed string: " <<s<<endl;
  int size = s.size();
  cout<<"length of the string is: "<<size<<endl;
  reverse(s.begin(),s.end());
  s.push_back('a');
  cout<<"Pushed back a: "<<s<<endl;
  s.pop_back();
  cout<<"poped back: "<<s<<endl;

  //string concatenation 
  string f_name = s + " saxena";
  string official_name = "Mr. " + f_name;
  cout<<f_name<<endl<<official_name<<endl;
}