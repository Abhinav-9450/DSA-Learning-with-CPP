#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
int num;
cout<<"Enter the numbers: ";
cin>>num;
string s = to_string(num);
cout<<"The no. of digits in the number is: "<<s.size()<<endl;

}