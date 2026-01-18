#include<iostream>
using namespace std;

int main()
{
    int num1,num2,num3;
    cout<<"Enter the 1st number: ";
    cin>>num1;
    cout<<"Enter the 2nd number: ";
    cin>>num2;
    cout<<"Enter the 3rd number: ";
    cin>>num3;
    if(num1>num2 && num1>num3)
    {
        cout<<num1<<" is the largest."<<endl;
    }
    if(num2>num1 && num2>num3)
    {
        cout<<num2<<" is the largest."<<endl;
    }
    if(num3>num2 && num3>num1)
    {
        cout<<num3<<" is the largest."<<endl;
    }
    if(num1==num2 && num2==num3)
    {
        cout<<"All the numbers are equal.";
    }
    return 0;
}