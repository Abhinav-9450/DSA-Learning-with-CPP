#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the no. of rows: ";
    cin>>rows;
    for(int i=1;i<=rows;i++){
        for(int j=rows;j>=1;j--){
            if (j<=i) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
    for(int i=1;i<=rows;i++){
        for(int j=i;j<rows;j++){
            cout<<"  ";
        }
        for(int k=1;k<=i;k++){
            cout<<k<<" ";
        }
        cout<<endl;
    }
    return 0;
}