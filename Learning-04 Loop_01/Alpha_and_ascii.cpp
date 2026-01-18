#include<iostream>
using namespace std;

int main(){
    char ch='A';
    for(int i=1;i<=26;i++){
        cout<<ch<<" "<<(int)ch<<endl;
        ch++;
    }
    return 0;
}