//Brute Force Approach
//Method-02 Constant space probelm 

//brute force
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void brute_force(){
  string s;
  getline(cin,s);
  int mx = 0;
  int n = s.size();
  for(int i=0;i<n;i++){
    int count=1;
    for(int j=i+1;j<n;j++){
      if(s[i]==s[j]) count++;
    }
    mx = max(count,mx);
  }
  for(int i=0;i<n;i++){
    int count=1;
    for(int j=i+1;j<n;j++){
      if(s[i]==s[j]) count++;
    }
    if (count == mx) cout<<s[i]<<" "<<count<<endl;
  }
}

void optimised(){
  string s;
  getline(cin,s);
  int n = s.size();
  if (n==1){
    cout<<s[0]<<" "<<1<<endl;
  }

  else{
    sort(s.begin(),s.end());
    int mx = 1;
    int count = 1;
    
    for(int i=1;i<n;i++){
      if(s[i-1] == s[i]) count++;
      else count = 1;
      mx = max(mx,count);
    }
    
    for(int i=1;i<n;i++){
      if(s[i-1] == s[i]) count++;
      else count = 1;
      if (count == mx) cout<<s[i]<<" "<<mx<<endl;
    }
  }

}

int main(){
  brute_force();
  optimised();
}