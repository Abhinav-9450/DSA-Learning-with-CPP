#include<iostream>
using namespace std;

int factorial(int x){
    int product = 1;
    for(int i=1;i<=x;i++){
        product*=i;
    }
    return product;
}

int main(){
    int n,r;
    cout<<"Enter n and r: ";
    cin>>n>>r;
    int comb = (factorial(n)/(factorial(r)*factorial(n-r)));
    int perm = (factorial(n)/factorial(n-r));
    cout<<"The "<<n<<"p"<<r<<" is "<<perm<<endl;
    cout<<"The "<<n<<"c"<<r<<" is "<<comb<<endl;
}