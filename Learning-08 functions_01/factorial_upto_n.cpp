#include<iostream>
using namespace std;

int fact(int x){
    int product = 1;
    for(int i=1;i<=x;i++){
        product*=i;
    }
    return product;
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<i<<"! = "<<fact(i)<<endl;
    }
    return 0;
}