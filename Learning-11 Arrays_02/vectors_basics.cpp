#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector <int> v;
    v.push_back(5);
    cout<<v.size()<<" "<<v.capacity();
    cout<<endl;
    v.push_back(4);
    cout<<v.size()<<" "<<v.capacity();
    cout<<endl;
    v.push_back(6);
    cout<<v.size()<<" "<<v.capacity();
    cout<<endl;
    v.push_back(2);
    cout<<v.size()<<" "<<v.capacity();
    cout<<endl;
    v.push_back(1);
    cout<<v.size()<<" "<<v.capacity();
    cout<<endl;

    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    cout<<endl;

    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++) cout<<v.at(i)<<" ";
    cout<<endl;

     v.pop_back();
    cout<<v.size()<<" "<<v.capacity();
    cout<<endl;
    v.pop_back();
    cout<<v.size()<<" "<<v.capacity();
    cout<<endl;
    v.pop_back();
    cout<<v.size()<<" "<<v.capacity();
    cout<<endl;
    v.pop_back();
    cout<<v.size()<<" "<<v.capacity();
    cout<<endl;
    v.pop_back();
    cout<<v.size()<<" "<<v.capacity();
    cout<<endl;
    
}