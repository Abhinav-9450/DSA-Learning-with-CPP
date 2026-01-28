#include<iostream>
using namespace std;

int main(){
  //string is a character array
  char str[7] = {'a','b','c','d','e','f'};

  //looping through this string
  for (int i=0;i<7;i++){
    cout<<str[i]<<" "<<i<<" ";
  }
  cout<<endl;

  //special character /0
  char ctr[6] = "abcde"; //space 6 for the special character null /0
  for(int i=0;i<6;i++){
    cout<<int(ctr[i])<<" "; //ascii value of the null character is 0 //97 98 99 100 101 0
  }
  cout<<endl;

  //in array declaration of string the /0 is added by the computer default
  for (int i=0;i<7;i++){
    cout<<(int)(str[i])<<" "<<i<<" ";
  }
  cout<<endl;

  //accessing the null character
  cout<<(str[7])<<endl;

  //accesing the elements without size looping in it
  for(int i=0;str[i] != '\0';i++){
    cout<<str[i]<<" ";
  }
  cout<<endl;

  //Direct printing of the string
  cout<<str<<endl;

  //printing stopped as soon as the special null character is touched
  char ktr[] = "abcd\0abde";
  cout<<ktr<<endl; //output abcd
}