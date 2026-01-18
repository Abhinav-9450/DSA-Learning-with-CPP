#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter the character: ";
    cin>>ch;
    int val = (int)ch;
    if((val>=97 && val<=122) || (val>=65 && val<=90)) //The heirarchy of && is greater than the || so no need of small brackets.
    {
        cout<<"Entered character is alphabet"<<endl;
    }
    return 0;
}