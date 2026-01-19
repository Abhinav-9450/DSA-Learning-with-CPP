#include<iostream>
using namespace std;

int main(){
    // This taking inputs works like this.
    // int t = 7;
    // int* ptr = &t;
    // cin>>*ptr;
    int a=5,b=4;
    int* p1=&a,*p2=&b;
    cout<<*p1+*p2<<endl;
    cout<<p1<<endl<<p2;
}