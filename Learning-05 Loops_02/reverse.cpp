#include<iostream>
using namespace std;

int main(){
    int num,last_digit,reverse_num=0;
    cout<<"Enter the number: ";
    cin>>num;
    while(num){
        last_digit=num%10;
       reverse_num = reverse_num * 10 + last_digit;
        num/=10;
    }
    cout<<"The reverse of the number is "<<reverse_num<<endl;
    return 0;
}