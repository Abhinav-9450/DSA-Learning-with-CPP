#include<iostream>
using namespace std;

int factorial(int x){
    int product = 1;
    for(int i=1;i<=x;i++){
        product*=i;
    }
    return product;
}

int combination(int n,int r){
    int nfact = factorial(n);
    int rfact = factorial(r);
    int nrfact = factorial(n-r);
    int comb = nfact/(rfact*nrfact);
    return comb;
}
int main(){
    int rows;
    cout<<"Enter the no. of rows: ";
    cin>>rows;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=i;j++){
            cout<<combination(i-1,j-1)<<" ";
        }
        cout<<endl;
    }
}