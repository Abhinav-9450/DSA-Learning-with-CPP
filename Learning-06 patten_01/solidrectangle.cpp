#include<iostream>
using namespace std;

int main(){
    int rows,coloumn;
    cout<<"Enter rows: ";
    cin>>rows;
    cout<<"Enter coloumn: ";
    cin>>coloumn;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=coloumn;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}