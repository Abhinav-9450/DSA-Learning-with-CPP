#include<iostream>
using namespace std;

int main(){
    //Method 1 -> checking
    for(int i=1;i<=100;i++){
        if(i%2==0){
            cout<<i<<endl;
        }
    }

    //Method 2 -> using +=2
    for(int i=2;i<=100;i+=2){
        cout<<i<<endl;
    }
    return 0;
}