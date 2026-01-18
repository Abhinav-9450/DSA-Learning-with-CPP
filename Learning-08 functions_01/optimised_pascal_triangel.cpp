#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the no. of rows: ";
    cin>>rows;
    for(int i=1;i<=rows;i++){
        int comb = 1;
        for(int j=1;j<=i;j++){
           cout<<comb<<" ";
           comb = comb * (i-j)/(j);
        }
        cout<<endl;
    }
}