#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter a number: ";
    int num;
    cin>>num;
    if(num%5 == 0)
    {
        cout<<"Entered number is divisible by 5";
    }
    else{
        cout<<"Entered number is not divisible by 5";
    }
    return 0;
}