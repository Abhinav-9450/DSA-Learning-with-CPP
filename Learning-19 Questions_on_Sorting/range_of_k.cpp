#include<iostream>
#include<vector>
#include<algorithm>
#include<Climits>

using namespace std;

float min(float a, float b){
  if(a<b) return a;
  else return b; 
}

float max(float a, float b){
  if(a>b) return a;
  else return b; 
}

int main(){
  vector <int> arr = {3,3,3};
  int n = arr.size();
  float r_min = float(INT_MIN);
  float r_max = float(INT_MAX);
  for(int i = 0;i<n-1;i++){

    if(arr[i]>=arr[i+1]) r_min = max(r_min, (arr[i]+arr[i+1])/2.0);
    else r_max = min(r_max, (arr[i]+arr[i+1])/2.0);

    if(r_min>r_max) break;
  }

  //edge cases of the r_min and r_max
  if(r_min>r_max){
    cout<<-1<<endl;
  }
  else{

    if(r_max == r_min){
      if(r_min - int(r_min)>0){
        cout<<-1<<endl;
      }
      else cout<<r_min<<endl;
    }

    else if(r_max - r_min<1){
      cout<<-1<<endl;
    }
       
    else{
       if(r_min - int(r_min)>0){
        cout<<"["<<int(r_min)+1<<" : "<<int(r_max)<<"]"<<endl;
      }
      else{
        cout<<"["<<(r_min)<<" : "<<int(r_max)<<"]"<<endl;
      }
    }
  }
}