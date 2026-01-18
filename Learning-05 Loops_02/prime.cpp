#include<iostream>
using namespace std;

int main(){
    int count=0,n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=2;i<n;i++){
        if(n%i==0){
            count++;
            break;
        }
    }
    //condition for the prime number and the composite number
    if(n==1){
        cout<<n<<" is neither prime nor composite."<<endl;
    }
    else if(count==0){
        cout<<n<<" is Prime"<<endl;
    }
    else{
        cout<<n<<" is Composite"<<endl;
    }
    return 0;
}