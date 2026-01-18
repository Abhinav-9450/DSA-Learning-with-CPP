#include<iostream>
using namespace std;

int main()
{
    float cp,sp;

    cout<<"Enter the cost price of the article Rs.";
    cin>>cp;

    cout<<"Enter the selling price of the article Rs.";
    cin>>sp;

    float net = cp - sp;

    if(net < 0){
        cout<<"You made profit of Rs."<<-net<<endl;
    }
    else{ // net >= 0
        if(net == 0){
            cout<<"You made neither profit nor loss"<<endl;
        }
        else{
            cout<<"You made a loss of Rs."<<net<<endl;
        }   
    }

    return 0;
}