#include<iostream>
using namespace std;

int main(){
    int num,pow;
    float product=1;
    bool flag=true;
    cout<<"Enter the number and the power: ";
    cin>>num>>pow;

    if(pow<0){
        pow = -pow;
        flag=false;
    }

    for(int i=1;i<=pow;i++){
        product *= num;
    } 
    
    if(flag==false){
        product=1/product;
        pow=-pow;
    }

    if(num==0&&pow==0) cout<<"Not defined"<<endl;
    else  cout<<num<<" raised to "<<pow<<" is "<<product<<endl;
   
    return 0;
}