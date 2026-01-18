#include<iostream>
using namespace std;

int main(){

    //normal loop
    for(int i = 1;i <= 5;i++){
        cout<<"Hello Abhinav"<<endl;
    }

    // entered repetition from user
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"Hello World"<<endl;
    }

    // declaring the i out of for loop makes the 
    int i;
    for(i = 1;i <= 5;i++) cout<<"Hello Again"<<endl;
    cout<<"Value of the i is "<<i<<endl;
    return 0;

}