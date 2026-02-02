#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
using namespace std;

int main(){
  string s;
  cout<<"Enter the no. as strings: ";
  getline(cin,s);
  stringstream ss(s); //converting into a stream class object
  string temp;
  int m_x = 0;
  while(ss>>temp){ //extracting each word from the string
    m_x = max(m_x,stoi(temp));
  }
  cout<<"The maximum of all the number is: "<<m_x;

}