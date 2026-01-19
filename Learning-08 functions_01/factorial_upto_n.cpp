#include<iostream>
using namespace std;

long long fact(int x){
    long long product = 1;
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