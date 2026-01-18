#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the no.: ";
    int num,count=0;
    cin>>num;

    if(num==0) count = 1;
    
    while(num!=0){
        num/=10;
        count++;
    }
    cout<<"The no. of digits in the given number is "<<count<<endl;
    return 0;
}