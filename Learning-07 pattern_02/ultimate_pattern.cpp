#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the no. of rows: ";
    cin>>rows;
    bool flag=true,slag=true;
    for(int i=1;i>0;){
        slag=true;
        for(int j=1;j>0;)
        {
            cout<<rows+1-min(i,j)<<" ";
            if(j==rows) slag = false;
            if(slag) j++;
            else j--;
        }
        cout<<endl;
        if (i==rows) flag = false;
        if (flag) i++;
        else i--;
    }
    return 0;
}