// sort a string after removing all letter than X

#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
  string s;
  cout<<"Enter all the characters in capital letters: ";
  cin>>s;

  int n = s.size();

  string str;  

  for(int i=0;i<n;i++){
    if(s[i] >= 'X'){
      str.push_back(s[i]); //only pushback the characters that are greater than 'X'
    }
}

    for(int i=0; i<str.size()-1; i++)
    {
    cout<<i+1<<" Pass:"<<endl;
    for(int j=1; j<str.size()-i; j++)  //bubble sort to sort the elements in characters.
    {

      if(str[j]<str[j-1]){
        int temp = str[j];
        str[j] = str[j-1];
        str[j-1] = temp;
      }

      for(int i=0;i<str.size();i++){
        cout<<str[i]<<" ";
  }

  cout<<endl;
  }

  cout<<endl;
  }

}