#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the n upto which you want to see factorials: ";
    int n,product=1;
    cin>>n;
    for(int i=1;i<=n;i++){
        product*=i;
        cout<<i<<"! = "<<product<<endl;
    }
    return 0;
}