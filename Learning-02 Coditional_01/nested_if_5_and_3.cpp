#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    if(num%5 == 0){
        if(num%3 == 0){
            cout<<"The number is divisible by 5 and 3 both.";
        }
        else{
            cout<<"Not matching condition.";
        }
    }
    else{
        cout<<"Not matching condition.";
        }
    return 0;

}