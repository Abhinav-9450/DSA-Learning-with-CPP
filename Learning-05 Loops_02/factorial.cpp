#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the number: ";
    int num,product=1;
    cin>>num;
    while(num>0){
        product*=num;
        num--;
    }
    cout<<"The factorial of the number is "<<product<<endl;
    return 0;
}