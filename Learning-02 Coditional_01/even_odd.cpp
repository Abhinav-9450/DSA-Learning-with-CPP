#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(num%2==0){
        cout<<"EVEN";
    }
    //  if(num%2 != 0){
    //     cout<<"ODD";
    // }  
    //this odd even function with two if statement
    else{
        cout<<"ODD";
    }
    return 0;  
}