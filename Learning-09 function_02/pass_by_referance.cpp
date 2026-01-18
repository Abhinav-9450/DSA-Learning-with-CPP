#include<iostream>
using namespace std;
void swap(int* p1,int* p2){
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    return; 
}

int main(){
    cout<<"Enter the first number: ";
    int a;
    cin>>a;
    cout<<"Enter the second number: ";
    int b;
    cin>>b;
    cout<<"Before swaping: a "<<a<<" and b "<<b<<endl;
    swap(&a,&b);
    cout<<"After swaping: a "<<a<<" and b "<<b<<endl;
}