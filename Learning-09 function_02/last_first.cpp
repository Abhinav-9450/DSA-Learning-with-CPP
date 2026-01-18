#include<iostream>
using namespace std;

void digita(int* ld, int* fd, int n){
    *ld = n%10;
    while(n>0){
        *fd = n%10;
        n/=10;
    }
}

int main(){
    cout<<"Enter the number: ";
    int n,ld,fd;
    cin>>n;
    digita(&ld,&fd,n);
    cout<<"The first digit is "<<fd<<" and the last digit is "<<ld<<endl;
}