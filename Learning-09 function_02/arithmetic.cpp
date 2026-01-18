#include<iostream>
using namespace std;

int main(){
    int a=5,b=4;
    int* p1=&a,*p2=&b;
    cout<<p1<<endl;
    p1 = p1 + 1;
    cout<<p1<<endl<<p2<<endl;
    cout<<*p1<<endl;
}