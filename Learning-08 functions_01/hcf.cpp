#include<iostream>
using namespace std;

int HCF(int a,int b){
    int factor = 1;
    for(int i = 1;i<=min(a,b);i++){
        if(a%i==0&&b%i==0) factor=i;
    }
    return factor;
}

int main(){
    int a,b;
    cout<<"Enter the first no. ";
    cin>>a;
    cout<<"Enter the second no. ";
    cin>>b;
    cout<<"The HCF of the two given no. is "<<HCF(a,b)<<endl;
}