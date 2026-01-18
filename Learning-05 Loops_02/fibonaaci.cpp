#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the n: ";
    int n,previous_term=1,next_term=1,temp;
    cin>>n;
    for(int i=3;i<=n;i++){
        temp = next_term;
        next_term += previous_term;
        previous_term = temp;
    }
    cout<<"The "<<n<<"th fibonacci number is "<<next_term<<endl;
    return 0;
}