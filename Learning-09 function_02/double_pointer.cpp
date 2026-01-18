#include<iostream>
using namespace std;

int main(){
    int a = 3;
    int *ptr = &a;
    int **ptr2= &ptr;
    cout<<a<<endl<<*ptr<<endl<<**ptr2<<endl;
    cout<<&a<<endl<<ptr<<endl<<*ptr2<<endl;
}