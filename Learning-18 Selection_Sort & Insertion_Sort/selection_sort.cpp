#include<iostream>
#include<vector>

using namespace std;

int main(){
  vector <int> arr = {5,4,3,2,1};
  int size = arr.size();
  
  // selection sort
  for(int i=0; i<size; i++){

    int min_idx = i;
    int min_element = arr[i];

    for(int j=i;j<size;j++){
      // selecting the minimum element in the block considering
      if (arr[j] < min_element){
        min_element = arr[j];
        min_idx = j;
      }

    }
    //swap the element with the ith element  
    int swap = arr[i];
    arr[i] = min_element;
    arr[min_idx] = swap;

  }

  for(int i=0;i<size;i++){
    cout<<arr[i]<<endl;
  }
}