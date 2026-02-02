#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
#include<vector>
using namespace std;


int main(){
  string s = "03432894765676765767";  //this cant be stored in integers.
  string l = "908523576"; 

  int a = stoi(l);
  long long b = stoll(s);
  cout<<a<<"  "<<b<<endl;
}