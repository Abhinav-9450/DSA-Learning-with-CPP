#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
//reversing the string by index
string s;
cout<<"Enter the string even lettered: "<<endl;
getline(cin,s);
int size = s.size();
cout<<"Original string: "<<endl;
reverse(s.begin(),s.begin()+size/2);
cout<<"Reversed string is: "<<s<<endl;

//reversing the string by both starting and ending index
cout<<"Again enter the string for 2 to 5 reversing: "<<endl;
getline(cin,s);
cout<<s<<endl;
reverse(s.begin()+2,s.begin()+6);
cout<<s<<endl;
}