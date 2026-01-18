#include<iostream>
using namespace std;

int main(){
    int num,last_digit,sum=0;
    cout<<"Enter the no.: ";
    cin>>num;
    while(num!=0){
        last_digit = num%10;
        sum+=last_digit;
        num/=10;
    }
    cout<<"The sum of the digits is "<<sum;
    return 0;
}