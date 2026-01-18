#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter a number: ";
    int num;
    cin>>num;
    if(num >= 0){
       cout<<num<<endl; 
    }
    else{
       cout<<-num<<endl; //this doesn't change the number 
    }
    cout<<num<<endl;
}