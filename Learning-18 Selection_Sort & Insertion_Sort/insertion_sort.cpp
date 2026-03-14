#include<iostream>
#include<vector>

using namespace std;

int main(){
  //Insertion sort 
  vector <int> arr = {4,56,43,12,34};
  
  //outer loop upto i = 0 to n-1
  for(int i=0; i<arr.size()-1; i++){
    //inner loop from i+1 to 0
    for(int j= i + 1; j>0; j--){
      if(arr[j] < arr[j-1]) swap(arr[j], arr[j-1]);
      else break; //if there is no swapping then break
    }
  }

  for( int ele : arr){
    cout<<ele<<endl;
  }
}