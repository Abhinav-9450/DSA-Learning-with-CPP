#include<iostream>
using namespace std;

int main()
{    
    //teranry -> condition?expression1:expression2;
    int num;
    cout<<"Enter an integer: ";
    cin>>num;
    (num%2==0)?cout<<"even":cout<<"odd";
    cout<<endl;

    int marks;
    cout<<"Enter the marks: ";
    cin>>marks;
    marks>33?cout<<"Pass":cout<<"Fail";
    cout<<endl;
    
    //even odd modified
    cout<<"Enter an integer: ";
    cin>>num;
    cout<<(num%2==0?"even":"odd")<<endl;

}