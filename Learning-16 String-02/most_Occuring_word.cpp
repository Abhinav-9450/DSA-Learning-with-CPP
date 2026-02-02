//using string stream
#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
  string s;
  vector <string> str;
  cout<<"Enter the sentence to check for the maximum frequency word: ";
  getline(cin,s);
  string temp;
  stringstream ss(s);
  while(ss>>temp){
    str.push_back(temp);
  }

  sort(str.begin(),str.end()); //sorting the string for the optimised searching

  int count=1;
  int m_x = 0;

  // loop for checking if the previous string matches the current string if yess the count++ else count=1
  // at each step max is called to find the maximum of the m_x and count
  for(int i=1;i<str.size();i++){
    if(str[i]==str[i-1]){
      count = count+1;
    }
    else{
      count = 1;
    }
    m_x = max(m_x,count);
  }

  //to see the maximum character in the string
  for(int i=1;i<str.size();i++){
    if(str[i]==str[i-1]){
      count = count+1;
    }
    else{
      count = 1;
    }
    if(m_x == count){
      cout<<str[i]<<" "<<count<<endl; //printing the maximum character if the count matches m_x
    }
  }
  return 0;
}