#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    if(num%3==0 || num%5==0)
    {
        if(num%15==0)
        {
          cout<<"Not matching condition."<<endl;
        }
        else{
            cout<<"The number is divisible by 3 or 5 but not 15"<<endl;
        }
    }
    else{
           cout<<"Not matching condition."<<endl;
        }
        return 0;
    }
