#include<iostream>
using namespace std;

int main(){
    int month;
    cout<<"Enter a month number: ";
    cin>>month;
    // 1 3 5 7 8 10 12 -> 31
    // 4 6 9 11 -> 30
    // 2 -> 28
    //multiple switch with condition
    
    switch((month <= 7 && month%2 != 0)||(month >= 8 && month%2 == 0))
    {
        case 1:
        cout<<"31";
        break;
    }

    switch(month == 4 || month == 6 || month == 9 || month == 11){
        case 1:
        cout<<"30";
        break;
    }
    switch(month){
        case 2:
        cout<<"28";
        break;
    }
    return 0;
}
