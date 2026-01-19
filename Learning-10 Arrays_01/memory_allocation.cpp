#include<iostream>
using namespace std;

int main(){
    int arr[6];
    for(int i=0;i<6;i++) cout<<&arr[i]<<endl;
// 0x61fef4
// 0x61fef8
// 0x61fefc
// 0x61ff00
// 0x61ff04
// 0x61ff08
}