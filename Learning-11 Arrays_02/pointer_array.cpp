#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,5,2,6,8,9};
    int *ptr = arr;
    for(int i=0;i<6;i++) cout<<ptr[i]<<endl;//its not changing ptr
    cout<<*ptr<<endl;
}