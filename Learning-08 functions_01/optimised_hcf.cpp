#include<iostream>
using namespace std;

int HCF(int a,int b){
   int factor=min(a,b);
   while(factor>0){
    if(a%factor==0 && b%factor==0) break;
    factor--;
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