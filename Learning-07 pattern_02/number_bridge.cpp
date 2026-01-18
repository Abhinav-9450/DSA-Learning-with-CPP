#include<iostream>
using namespace std;

int main(){ 
    int rows;
    cout<<"Enter the no. of rows: ";
    cin>>rows;
    for(int i=1;i<=rows;i++){
        if(i==1){
            for(int j=1;j<=2*rows-1;j++) cout<<j<<" ";
        }
        else{
            for(int j=i;j<=rows;j++) cout<<j+1-i<<" ";
            for(int k=1;k<=2*i-3;k++) cout<<"  ";
            for(int m=i;m<=rows;m++) cout<<m-1+rows<<" ";
        }
        cout<<endl;
    }
    return 0;
}