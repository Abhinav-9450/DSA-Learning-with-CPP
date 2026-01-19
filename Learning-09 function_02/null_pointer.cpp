#include<iostream>
using namespace std;

int main(){
    int *ptr = NULL;
    int *ptr1 = 0;
    int *ptr2 = '\0';
    cout<<ptr<<endl<<ptr1<<endl<<ptr2<<endl;// all the address are given 0 something like 0x0
    cout<<*ptr<<endl<<*ptr1<<endl<<*ptr2<<endl;// this won't give anything.
}