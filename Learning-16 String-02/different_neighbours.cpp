#include<iostream>
#include<string>
using namespace std;

int main(){
  cout<<"Enter the string: ";
  string s;
  getline(cin,s);
  int count = 0;
  if(s.size() == 1){ // for string a it comes 0 edge case 01
    count = 0;
  }
else if(s.size() == 2 && s[0] != s[1]){ // for string ab it comes 1 edge case 02
  count += 1;
}
else{
  for(int i=0;i<s.size();i++){
    if(i==0){
      if(s[i] != s[i+1]){
        count+=1;
      }
    }
      else if(i==s.size()-1){
        if(s[i] != s[i-1]){
          count += 1;
        }
      }
      else{
        if(s[i] != s[i-1] && s[i] != s[i+1]){
          count+=1;
        }
      }
  }
}
  cout<<count;
}