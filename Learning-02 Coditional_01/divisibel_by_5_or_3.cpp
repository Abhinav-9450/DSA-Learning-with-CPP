#include<iostream>
using namespace std;
 
int main()
{
    cout<<"Enter a number: ";
    int num;
    cin>>num;
    if(num%3==0 || num%5==0){
        cout<<"Divisible by 5 or 3 (either one or both)";
    }
    else{
        cout<<"Not divisible by both 5 and 3";
    }
    return 0;
}