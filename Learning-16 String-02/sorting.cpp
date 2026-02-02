//Lexicographic sorting
//spaces takes the first space

#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
  string s;
  cout<<"Enter the characters to get the lexicographic sorting: ";
  getline(cin,s);

  sort(s.begin(),s.end());

  for(int i=0;i<s.size();i++){ //spaces comes first in the sorting.
    cout<<s[i]<<endl;
  }
  
}