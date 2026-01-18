#include<iostream>
using namespace std;

int main(){
    int *ptr = NULL;
    int *ptr1 = 0;
    int *ptr2 = '\0';
    cout<<ptr<<endl<<ptr1<<endl<<ptr2<<endl;
    cout<<*ptr<<endl<<*ptr1<<endl<<*ptr2<<endl;// this will like doesnt give anything.
}