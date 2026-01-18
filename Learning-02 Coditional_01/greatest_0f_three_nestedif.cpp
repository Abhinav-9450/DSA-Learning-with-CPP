#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter the 1st number: ";
    cin>>a;
    cout<<"Enter the 2nd number: ";
    cin>>b;
    cout<<"Enter the 3rd number: ";
    cin>>c;
    if(a>b){ //a>b
        if(a>c){ // a>b && a>c
            cout<<a<<" is greatest.";
        }
        else{ //c>a>b
            cout<<c<<" is greatest.";
        }
    }
    else{  //b>a
        if(b>c){  //b>a && b>c
            cout<<b<<" is the largest.";
        }
        else{ //c>b>a 
            cout<<c<<" is the largest.";
        }
    }
    return 0;
}