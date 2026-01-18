#include<iostream>
using namespace std;

int main(){ 
    int rows;
    cout<<"Enter the no. of rows: ";
    cin>>rows;
    for(int i=1;i<=rows;i++){
        for(int j=i;j<rows;j++) cout<<"  ";
        for(int k=1;k<=i;k++) cout<<k<<" ";
        for(int l=i-1;l>0;l--) cout<<l<<" ";
        cout<<endl;
    }
    return 0;
}