#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;
    int val = (int)ch;
    if(val>=97 && val<=122 || val>=65&&val<=90){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
            cout<<"The letter is a vowel";
        }
        else{
            cout<<"The letter is a consonant";
        }
        }
    else{
        cout<<"The character is not an alphabet";
    }    
    }
