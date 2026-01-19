#include<iostream>
using namespace std;
int main(){
    //explicitly declaring size
    int arr[7];
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 5;
    arr[5] = 6;
    arr[6] = 7;
    //declaring and intializing at the same time
    int brr[]={2,5,6,2,7,8};
    //printing every element using for loop
    for(int i=0;i<=6;i++) cout<<arr[i]<<endl;
    
}