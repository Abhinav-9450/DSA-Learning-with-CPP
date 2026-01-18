#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the no. of rows: ";
    cin>>rows;
    int temp=1;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=i;j++){
            cout<<temp<<" ";
            temp++;
        }
        cout<<endl;
    }
    return 0;
}