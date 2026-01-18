#include<iostream>
using namespace std;
void square()
{
    cout<<"Enter a number: ";
    int x;
    cin>>x;
    cout<<"The square of the number is: "<<x*x; 
}
void sum()
{
    int x, y;
    cin>>x>>y;
    cout<<x+y;
}
void Si()
{
    float p, r, t, si;
    cout<<"Enter the principal: ";
    cin>>p;
    cout<<"Enter the rate of the interest: ";
    cin>>r;
    cout<<"Enter the time of the interest: ";
    cin>>t;
    si = p*r*t/100;
    cout<<"The interst calculated is: "<<si;
    
}
int main()
{
    //square();
    //sum();
    Si();
    return 0;
}