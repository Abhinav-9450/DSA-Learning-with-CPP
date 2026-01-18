#include<iostream>
using namespace std;

int main(){ 
    int rows;
    cout<<"Enter the no. of rows: ";
    cin>>rows;
    for(int i=1;i<=rows;i++){
        for(int j=i;j<rows;j++) cout<<"  ";
        for(int l=1;l<=2*i-1;l++) cout<<"* ";
        cout<<endl;
    }
    for(int i=rows-1;i>0;i--){
        for(int j=i;j<rows;j++) cout<<"  ";
        for(int l=1;l<=2*i-1;l++) cout<<"* ";
        cout<<endl;
    }
    
    return 0;
}