#include<iostream>
using namespace std;

int main(){
    cout<<"Enter n for the sum of the series is. ";
    int n,sum = 0,sum_2;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2==0) sum-=i;
        else sum+=i;
    }
    if (n%2==0) sum_2 = -(n/2);
    else sum_2 = (n+1)/2;
    cout<<"The sum of the series 1-2+3-4+5... upto n term is "<<sum<<endl;
    cout<<"The sum from maths is "<<sum_2<<endl;
    return 0;
}