#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the number: ";
    int num;
    cin>>num;
    if(num<=999 && num>=100)
    {
        cout<<"Entered number is a three digit number";
    }
    else{
        cout<<"Entered number is not a three digit number";
    }
    return 0;
}