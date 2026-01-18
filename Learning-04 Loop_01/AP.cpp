#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the nth term: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<1+(i-1)*2<<endl;
    }

    //separate variable
    int a = 1;
    for(int i=1;i<=n;i++){
        cout<<a<<endl;
        a+=2;
    }
    
    return 0;
}